#include<stdio.h>
#include<windows.h>
void greet();//declaration of fxn

int main()//starting point of program
{
    system("cls");
    printf("hii i am main fxn \n");
    greet();//calling of greet fxn
    printf("in main fxn after calling greet \n");
    return 0;//ending point of program
}
void greet()// defination (body of greet fxn)
{
    printf(" Good morning \n");
}