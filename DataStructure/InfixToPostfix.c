//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//
//#define MAX_SIZE 100
//
//typedef char Data;
//
//typedef struct Stack{
//    int top;
//    char str[MAX_SIZE];
//}Stack;
//
//
//void StackInit(Stack * pstack);
//int IsEmpty(Stack * pstack);
//void Push(Stack * pstack, Data data);
//Data Pop(Stack * pstack);
//Data Peek(Stack * pstack);
//
//void StackInit(Stack * pstack){
//    pstack -> top = -1;
//}
//
//int IsEmpty(Stack * pstack){
//    if(pstack -> top == -1) return 1;
//    return 0;
//}
//
//char isPeek(Stack*pstack){
//    return pstack->str[pstack->top];
//}
//
//void Push(Stack * pstack, char data){
//    (pstack -> top)++;
//    pstack -> str[pstack -> top] = data;
//}
//
//char Pop(Stack* pstack){
//    char returnData = pstack->str[pstack->top];
//    (pstack->top)--;
//    return returnData;
//}
//
//int GetOpPrec(char op){
//    switch(op){
//        case '*':
//        case '/':
//            return 4;
//        case '+':
//        case '-':
//            return 2;
//        case'(':
//            return 1;
//    }
//    return -1;
//}
//
//int WhoPrecOp(char op1, char op2){
//    int op1Prec = GetOpPrec(op1);
//    int op2Prec = GetOpPrec(op2);
//    
//    if(op1Prec > op2Prec) return 1;
//    else if(op1Prec < op2Prec) return -1;
//    return 0;
//}
//
//void ConvToRPNExp(char exp[]){
//    Stack stack;
//    StackInit(&stack);
//    int expLen = strlen(exp);
//    char * convExp = (char*)malloc(expLen + 1);
//    
//    int idx = 0;
//    char tok, popOp;
//    memset(convExp,0,sizeof(char) * expLen + 1);
//    StackInit(&stack);
//    
//    for(int i = 0;i<expLen;i++)
//    {
//        tok = exp[i];
//        if(isupper(tok))
//            convExp[idx++] = tok;
//        else {
//            switch(tok)
//            {
//                case '(':
//                    Push(&stack, tok);
//                    break;
//                case ')':
//                    while(1){
//                        popOp = Pop(&stack);
//                        if(popOp == ')') break;
//                        else convExp[idx++] = popOp;
//                    }
//                    break;
//                case '+': case '-':
//                case '*': case '/':
//                    while(!IsEmpty(&stack) && WhoPrecOp(Peek(&stack), tok) >= 0)
//                        convExp[idx++] = Pop(&stack);
//                    Push(&stack, tok);
//            }
//        }
//    }
//    while(!IsEmpty(&stack)) convExp[idx++] = Pop(&stack);
//    strcpy(exp, convExp);
//    free(convExp);
//}
//
//
//int main(void){
//    char str[100];
//    //scanf("%s", str);
//    fgets(str,sizeof(str),stdin);
//    ConvToRPNExp(str);
//    printf("%s", str);
//    
//    return 0;
//}
