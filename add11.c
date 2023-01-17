#include<stdio.h>
int add(int,int);
int main(){
    char op;
    int a,b,result;
    printf("enter operation :");
    scanf("%c",&op);
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    switch (op)    {
    case '+':
        result=add(a,b);
        break;
    default:printf("invalid operation\n");
        break;
    }
    printf("the result is %d \n",result);
    return 0;
}
int add(int a,int b){    return a+b;}
