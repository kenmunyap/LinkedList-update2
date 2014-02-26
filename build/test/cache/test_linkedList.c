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





void test_List_addLast_should_add_last_one_element(){



 linkedList *list;

 list = create_linkedList();



 Element elemArray[]={

       {.next=(Element *)0xabc, .data=1}

      };



 List_addLast(list,elemArray);



 if ((((elemArray[0].next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)32);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray[0].data)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);







}



void test_List_addLast_should_add_last_second_element(){



 linkedList *list;

 list = create_linkedList();



 Element elemArray[]={

       {.next=&elemArray[1], .data=1},

       {.next=(Element *)0xbeefface, .data=2}

      };



 list->head = &elemArray[0];

 list->tail = &elemArray[0];

 list->length = 1;



 List_addLast(list,elemArray);



 if ((((elemArray[1].next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)58);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[1])), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray[0].data)), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elemArray[1].data)), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);



}
