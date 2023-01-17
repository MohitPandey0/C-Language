#include<stdio.h>
int main()
{
    FILE *fptr;
    // fptr=fopen("TestWriting.txt","w");
    fptr=fopen("TestWriting.txt","a"); // a for append
/*     for linux use // instead of \\  */
    char name[20];
    printf("enter the name \n");
    scanf("%[^\n]s%*c",&name);

    fprintf(fptr," the name is : %s \n",name);

    fclose(fptr);
    return 0;
}