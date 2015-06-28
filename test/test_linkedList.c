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
							{.next=(Element *)NULL, .data=1}
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
							{.next=&elemArray[1],   .data=1},	
							{.next=(Element *)NULL, .data=2}
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

void test_List_removeLast_no_element(){
	Element *element;
	linkedList *list;
	
	// initialize the list
	list = create_linkedList();
	
	// Test fixture
	// Element elemArray[]={								
							// {.next=NULL, .data=3}
						// };
						
	list->head = NULL;
	list->tail = NULL;
	list->length = 0;
	
	element = List_removeLast(list);
	TEST_ASSERT_EQUAL(NULL,list->head);
	TEST_ASSERT_EQUAL(NULL,list->tail);
	TEST_ASSERT_EQUAL(0,list->length);	
}

void test_List_removeLast_one_element_and_return_NULL(){
	Element *element;
	linkedList *list;
	
	// initialize the list
	list = create_linkedList();
	
	// Test fixture
	Element elemArray[]={								
							{.next=NULL, .data=3}
						};
						
	list->head = &elemArray[0];
	list->tail = &elemArray[0];
	list->length = 1;
	
	element = List_removeLast(list);
	TEST_ASSERT_EQUAL(NULL,list->head);
	TEST_ASSERT_EQUAL(NULL,list->tail);
	TEST_ASSERT_EQUAL(0,list->length);	
}

void test_List_removeLast_with_three_element(){
	Element *element;
	linkedList *list;
	
	//initialize the list
	list = create_linkedList();
	
	//Test fixture
	Element elemArray[]={	
							{.next=&elemArray[1],   .data=1},
							{.next=&elemArray[2],   .data=2},							
							{.next=(Element *)NULL, .data=3}
						};
						
	list->head = &elemArray[0];
	list->tail = &elemArray[2];
	list->length = 2;
	
	element = List_removeLast(list);
	TEST_ASSERT_EQUAL_PTR(&elemArray[0],list->head);
	TEST_ASSERT_EQUAL_PTR(&elemArray[1],list->tail);
	TEST_ASSERT_EQUAL(1,list->length);

}




	