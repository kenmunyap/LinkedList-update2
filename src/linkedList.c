#include "linkedList.h"
#include <stdio.h>
#include <malloc.h>


//Function to initialize the linkedList head,tail, and length
linkedList *create_linkedList(){
		linkedList *list = malloc(sizeof(linkedList));
		list->head = NULL;
		list->tail = NULL;
		list->length = 0;
		
		return list;
}
void list_testAdd(linkedList *list,Element *element){
	
	printf("First element data is: %d\n",element[0].data);
	printf("Second element data is: %d\n",element[1].data);
	
}

void list_Add(linkedList *list,Element *element){
		
		element[list->length].next = NULL;
		
		if(list->head == NULL && list-> tail == NULL){
			list->head = &element[0];
			list->tail = &element[0];
			list->length++;
		}
		
		
	
}

	