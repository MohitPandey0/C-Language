#include<stdio.h>
int main()
{
    int a;
    char ch;
    printf("enter a :");
    scanf("%d%*c",&a);
    // %*c means discarding an extra character(\n) which is strored after entering the value of a
    printf("enter character:");
    scanf("%c",&ch);
    printf(" a=%d  ch='%c' ascii of ch=%d  thank you!\n",a,ch,ch);
    return 0;
}
