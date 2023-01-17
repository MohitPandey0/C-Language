#include<stdio.h>
#include<stdlib.h>
int main()
{   
    //what is file handling and why file handling ?
    FILE *fileptr;
    fileptr=fopen("C:\\Users\\Students\\Desktop\\open tc.txt","r");

    if (fileptr==NULL)
    {
        printf("ERROR ! unable to open file\n");
        exit(0);
    }
    char ch;
    while (1)
    {
        ch=fgetc(fileptr);
        printf("%c",ch);
        if(ch==EOF) //EOF -> end of file
        {
            break;
        }
    }
    fclose(fileptr);
    return 0;
}
