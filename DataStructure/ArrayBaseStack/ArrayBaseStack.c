//#include <stdio.h>
//#include <stdlib.h>
//#include "ArrayBaseStack.h"
//
////#define TRUE    1
////#define FALSE    0
////#define STACK_LEN  100
////
////typedef int Data;
////
////typedef struct _arrayStack
////{
////    Data stackArr[STACK_LEN];
////    int topIndex;
////} ArrayStack;
////
////typedef ArrayStack Stack;
//
//#include "ArrayBaseStack.h"
//
//void StackInit(Stack * pstack)
//{
//    pstack -> topIndex = -1;
//}
//
//
//int SIsEmpty(Stack * pstack)
//{
//    if(pstack -> topIndex == -1) return TRUE;
//    else return FALSE;
//}
//
//void SPush(Stack * pstack, Data data){
//    pstack -> topIndex += 1;
//    pstack -> stackArr[pstack -> topIndex] = data;
//}
//
//Data SPop(Stack * pstack){
//    
//    int rIdx; //pop할 index
//    if(SIsEmpty(pstack)){
//        printf("Stack Memory Error!");
//        exit(-1);
//    }
//    rIdx = pstack -> topIndex;
//    pstack -> topIndex -= 1;
//    
//    return pstack -> stackArr[rIdx];
//}
//
//Data SPeek(Stack * pstack)
//{
//    if(SIsEmpty(pstack)) {
//        printf("Stack Memory Error!");
//        exit(-1);
//    }
//    return pstack -> stackArr[pstack -> topIndex];
//}
//
////Data SPop(Stack * pstack);
////Data SPeek(Stack * pstack);
//
