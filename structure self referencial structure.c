#include <stdio.h>
#include <stdlib.h>

/*
self-referential structure is a structure in C that 
contains a pointer to an instance of the same structure. 
This is often used to create linked data structures like 
linked lists, trees, and other data structures that 
require dynamic memory allocation
*/

struct list{
	
	int data;
	struct list *link;
};

int main(){
	
	struct list *l1 = (struct list*)malloc(sizeof( struct list ));
	l1->data = 10;
	l1->link = NULL;
	
	struct list *l2 = (struct list*)malloc(sizeof( struct list ));
	l2->data = 20;
	l2->link = NULL;
	l1->link = l2;
	
	struct list *l3 = (struct list*)malloc(sizeof( struct list ));
	l3->data = 30;
	l3->link = NULL;
	l2->link = l3;
	
	struct list *l4 = (struct list*)malloc(sizeof( struct list ));
	l4->data = 30;
	l4->link = NULL;
	l3->link = l4;
	
	printf("%d \t %d \n", l1->data, l1->link);
	printf("%d \t %d \n", l2->data, l2->link);
	printf("%d \t %d \n", l3->data, l3->link);
	printf("%d \t %d \n", l4->data, l4->link);
	
	
	return 0;
}

