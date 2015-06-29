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

void test_List_addLast_should_add_last_third_element(){



 linkedList *list;





 list = create_linkedList();







  Element elemArray1 = {.next = ((void *)0), .data = 2};

 Element elemArray0 = {.next = ((void *)0), .data = 1};

  Element elemArrayA = {.next = ((void *)0), .data = 4};

  Element elemArrayB = {.next = ((void *)0), .data = 7};









 List_addLast(list,&elemArray0);

  if ((((elemArray0.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)91);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);



  List_addLast(list,&elemArray1);

  if ((((elemArray1.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)98);;};

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)99, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray1)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)100, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)101, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elemArray1.data)), (((void *)0)), (_U_UINT)102, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);



  List_addFirst(list,&elemArrayA);

  if ((((elemArray1.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)106);;};

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArrayA)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)107, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((elemArrayA.next)), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray1)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)110, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elemArray1.data)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((elemArrayA.data)), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);



  List_addFirst(list,&elemArrayB);

  if ((((elemArray1.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)116);;};

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArrayB)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray1)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elemArray1.data)), (((void *)0)), (_U_UINT)120, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((elemArrayA.data)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((elemArrayB.data)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)123, UNITY_DISPLAY_STYLE_INT);



 List_removeLast(list);

  if ((((elemArray1.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)126);;};

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArrayB)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)128, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)129, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((elemArrayA.data)), (((void *)0)), (_U_UINT)130, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((elemArrayB.data)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);



  List_removeFirst(list);

  if ((((elemArray1.next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)135);;};

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArrayA)), (_U_SINT)(_UP)((list->head)), (((void *)0)), (_U_UINT)136, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((&elemArray0)), (_U_SINT)(_UP)((list->tail)), (((void *)0)), (_U_UINT)137, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elemArray0.data)), (((void *)0)), (_U_UINT)138, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((elemArrayA.data)), (((void *)0)), (_U_UINT)139, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)140, UNITY_DISPLAY_STYLE_INT);

}
