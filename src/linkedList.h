#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct Element_t Element;

//Struct of linkedList
typedef struct{
	Element *head;
	Element *tail;
	int length;
}linkedList;

//Struct of Element;
typedef struct Element_t{
	struct Element_t *next;
	int data;
}Element;

//Function prototype
linkedList *create_linkedList();
void list_Add(linkedList *list,Element *element);
#endif //__LINKED_LIST_H__