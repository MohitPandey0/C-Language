#include<stdio.h>
#include<stdlib.h>
#include "productStr.h"

int main()
{
    FILE *fptr;
    fptr=fopen("Data.txt","r");

    if (fptr==NULL)
    {
        printf("error unable to open file");
        exit(0);
    }
    product p;
    fread(&p,sizeof(product),1,fptr);

    fclose(fptr);
    printf("product id :%d\n",p.id);
    printf("product name :%s\n",p.name);
    printf("product price :%f\n",p.price);
    printf("product quantity :%d\n",p.quantity);
    return 0;
}
