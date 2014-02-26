#include "unity.h"
#include "linkedList.h"


void setUp(){}

void tearDown(){}



void test_create_linkedList_should_return_initialized_linkedList_object(){



 linkedList *list;



 list = create_linkedList();

 if ((((list)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)13);;};

 if ((((list->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)14);;};

 if ((((list->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)15);;};

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);



}



void test_listAdd_if_able_to_pass_in_array(){



 linkedList *list;

 list = create_linkedList();



 Element elem[] = {{.next = ((void *)0),.data = 1},{.next = ((void *)0),.data = 2}};

 list_testAdd(list,elem);



 if ((((list)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)28);;};

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elem[0].data)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elem[1].data)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);



}



void test_listAdd_should_add_one_element(){



 linkedList *list;

 list = create_linkedList();

 list->length = 1;



 Element elemArray[] = {{.next = ((void *)0),.data = 1}};

 list_Add(list,elemArray);



 if ((((elemArray[0].next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)43);;};

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);



}
