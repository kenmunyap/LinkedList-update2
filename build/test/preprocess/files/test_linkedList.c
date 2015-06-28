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

       {.next=(Element *)((void *)0), .data=1}

      };



 List_addLast(list,elemArray);



 if ((((elemArray[0].next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)35);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray[0].data)), (((void *)0)), (_U_UINT)38, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);







}



void test_List_addLast_should_add_last_second_element(){



 linkedList *list;





 list = create_linkedList();





 Element elemArray[]={

       {.next=&elemArray[1], .data=1},

       {.next=(Element *)((void *)0), .data=2}

      };



 list->head = &elemArray[0];

 list->tail = &elemArray[0];

 list->length = 1;



 List_addLast(list,elemArray);



 if ((((elemArray[1].next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)64);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[1])), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray[0].data)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elemArray[1].data)), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

}



void test_List_removeLast_no_element(){

 Element *element;

 linkedList *list;





 list = create_linkedList();













 list->head = ((void *)0);

 list->tail = ((void *)0);

 list->length = 0;



 element = List_removeLast(list);

 UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((list->head)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((list->tail)), (((void *)0)), (_U_UINT)90, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_INT);

}



void test_List_removeLast_one_element_and_return_NULL(){

 Element *element;

 linkedList *list;





 list = create_linkedList();





 Element elemArray[]={

       {.next=((void *)0), .data=3}

      };



 list->head = &elemArray[0];

 list->tail = &elemArray[0];

 list->length = 1;



 element = List_removeLast(list);

 UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((list->head)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((list->tail)), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

}



void test_List_removeLast_with_three_element(){

 Element *element;

 linkedList *list;





 list = create_linkedList();





 Element elemArray[]={

       {.next=&elemArray[1], .data=1},

       {.next=&elemArray[2], .data=2},

       {.next=(Element *)((void *)0), .data=3}

      };



 list->head = &elemArray[0];

 list->tail = &elemArray[2];

 list->length = 2;



 element = List_removeLast(list);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[0])), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray[1])), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)136, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((elemArray[2].data)), (((void *)0)), (_U_UINT)137, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)138, UNITY_DISPLAY_STYLE_INT);

}
