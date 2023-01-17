#include<stdio.h>
#include "calcfxn.h"
// #include "hello.c"
#include<stdlib.h>

int main()
{
    char op,ch;
    int a,b,result;
    // printf("%d \n",num);
    do{
    printf("enter operation :");
    scanf("%c",&op);
    printf("enter 2 numbers\n");
    scanf("%d%d%*c",&a,&b);
    // system("clear");
    switch (op)
    {
    case '+':
        result=add(a,b);
        break;
    case '-':
        result=sub(a,b);
        break;
    case '*':
        result=multi(a,b);
        break;
    case '/':
        result=divide(a,b);
        break;
    default:printf("invalid operation\n");
        break;
    }
    printf("the result is %d \n",result);
    printf("enter y/Y to continue :");
    scanf("%c%*c",&ch);
    }while(ch== 'y' || ch=='Y');
    return 0;
}