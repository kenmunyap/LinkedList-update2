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
