#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(short x, short y)
{
    COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
    printf("|%10s","Aman\n");
    printf("..........\n");
    printf("|%10s","Aman Tiw\n");
    printf("|%-10s|","Aman Tiw");
    printf("\n|%-10s|","Aman");
    printf("\n %05d\n",671);
    printf("%09s\n","Aman");
    printf("\n |%10.2f \n",667.543423);
    printf("|%-5d|%-5d|\n",1,2);
    printf("............\n");

    // // Note: A screen has 25 lines and 80 columns.

    // gotoxy(13,40);
    // printf("hii");
    // char text[]="Aman Tiwari";
    // char text[4000]="\
    //      0000   000000  000000  0000  000000  00   00  000000   000000\n\r\
    //     00  00    00      00     00     00    00   00  00   00  00\n\r\
    //     000000    00      00     00     00    00   00  00   00  0000\n\r\
    //     00  00    00      00     00     00    00   00  00   00  00\n\r\
    //     00  00    00      00    0000    00     00000   000000   000000\n\r\
    //     \n\r\
    //      00  00000 00000 00000 0   0 0000  00000 0   0  00000 00000\n\r\
    //     0  0   0     0   0     00  0 0   0 0     00  0 0      0\n\r\
    //     0000   0     0   000   0 0 0 0   0 000   0 0 0 0      000\n\r\
    //     0  0   0     0   0     0  00 0   0 0     0  00 0      0\n\r\
    //     0  0   0     0   00000 0   0 0000  00000 0   0  00000 00000\n\r\
    //     \n\r\
    //     0   0   00   0   0   00    00000  00000  0   0  00000  0   0  00000\n\r\
    //     00 00  0  0  00  0  0  0  0       0      00 00  0      00  0    0\n\r\
    //     0 0 0  0000  0 0 0  0000  0  000  000    0 0 0  000    0 0 0    0\n\r\
    //     0   0  0  0  0  00  0  0  0    0  0      0   0  0      0  00    0\n\r\
    //     0   0  0  0  0   0  0  0   00000  00000  0   0  00000  0   0    0\n\r\
    //     \r ";  
        // system("color 0A");
        // printf("%s",text);
        // Sleep(1000);
        // system("cls");
        // system("color 0b");
        // printf("%s",text);
        // Sleep(1000);
        // system("cls");
        // system("color 0c");
        // printf("%s",text);
        // Sleep(1000);
        // system("cls");
        // system("color 0d");
        // printf("%s",text);
    getch();
    return 0;
}
