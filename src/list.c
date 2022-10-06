#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    assert(l != NULL); /* Precondition: the list must have a size, therefor the first element cannot be NULL */
    int num_elements = 0; /* Number of elements in list */
    node *p = l;

    /* Loop calculating number of elements in a list */
    while(p->next != NULL){ /* Loop stops when reaching last element cotaining NULL */
      num_elements++; /* Counting numbers of elements*/
      p = p->next; /* Moving to next element */
    }
    return num_elements;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    assert(l != NULL); /* Precondition */
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
      p = p->next; /* Correction here. Updates the pointer to the next element */
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
    assert(size(l) > 0); /* Precondition: The size must be larger than zero */
    assert (l != NULL); /* Precondtion */
    node *p = l;
    int max = 0; /* Max value in list*/

    /* Loop running through each element in a list and finding the largest value*/
    while(p != NULL){
      /* When the if-statement is true, max gets assigned the largest value in the list */
      if(p->data > max){
        max = p->data;
      }
      p = p->next; 
    }
    return max; 
} 
 
