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