#include<stdio.h>
int add(int,int);//declaration of fxn
int main()//starting point of program
{
    int a=10,b=20,result;
    printf("hii i am main fxn \n");
    result=add(a,b);//calling of add fxn
    printf("the result is %d \n",result);
    printf("in main fxn after calling add \n");
    return 0;//ending point of program
}
int add(int a,int num2)// defination (body of add fxn)
{
    printf(" in add fxn \n");
    return a+num2;
}