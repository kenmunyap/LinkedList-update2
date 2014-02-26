#include "unity.h"
#include "linkedList.h"
#include <malloc.h>

void setUp(){}
void tearDown(){}

void test_create_linkedList_should_return_initialized_linkedList_object(){

	linkedList *list;
	
	list = create_linkedList();
	TEST_ASSERT_NOT_NULL(list);
	TEST_ASSERT_NULL(list->head);
	TEST_ASSERT_NULL(list->tail);
	TEST_ASSERT_EQUAL(0,list->length);
	
}

void test_listAdd_if_able_to_pass_in_array(){

	linkedList *list;
	list = create_linkedList();
	
	Element elem[] = {{.next = NULL,.data = 1},{.next = NULL,.data = 2}};
	list_Add(list,elem);
	
	TEST_ASSERT_NOT_NULL(list);
	TEST_ASSERT_EQUAL(1, elem[0].data);
	TEST_ASSERT_EQUAL(2, elem[1].data);
	
}