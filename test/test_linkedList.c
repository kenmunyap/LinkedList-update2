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


void test_List_addLast_should_add_last_one_element(){

	linkedList *list;
	
	//initialize the list
	list = create_linkedList();
	
	//Test fixture
	Element elemArray[]={							
							{.next=(Element *)0xabc, .data=1}
						};

	List_addLast(list,elemArray);
	
	TEST_ASSERT_NULL(elemArray[0].next);
	TEST_ASSERT_EQUAL_PTR(&elemArray[0],list->head);
	TEST_ASSERT_EQUAL_PTR(&elemArray[0],list->tail);
	TEST_ASSERT_EQUAL(1,elemArray[0].data);
	TEST_ASSERT_EQUAL(1,list->length);
	
	
	
}

void test_List_addLast_should_add_last_second_element(){

	linkedList *list;
	
	//initialize the list
	list = create_linkedList();
	
	//Test fixture
	Element elemArray[]={	
							{.next=&elemArray[1], .data=1},	
							{.next=(Element *)0xbeefface, .data=2}
						};
						
	list->head = &elemArray[0];
	list->tail = &elemArray[0];
	list->length = 1;
	
	List_addLast(list,elemArray);
	
	TEST_ASSERT_NULL(elemArray[1].next);
	TEST_ASSERT_EQUAL_PTR(&elemArray[0],list->head);
	TEST_ASSERT_EQUAL_PTR(&elemArray[1],list->tail);
	TEST_ASSERT_EQUAL(1,elemArray[0].data);
	TEST_ASSERT_EQUAL(2,elemArray[1].data);
	TEST_ASSERT_EQUAL(2,list->length);
	
}





	