#include<stdio.h>
#include "productStr.h"

int main()
{
    product p1={100,"apple",500,10};
    FILE *fptr;
    fptr=fopen("Data.txt","w");
    fwrite(&p1,sizeof(product),1,fptr);
    fclose(fptr);
    return 0;
}
