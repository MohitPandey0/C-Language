#include "Product.h"
void deleteProduct()
{
    FILE *fptr,*tempptr;
    product tempprod;
    fptr=fopen("storage.bin","rb");
    tempptr=fopen("tempstorage.bin","wb");
    int id,flag=0;
    system("cls");
    printf("enter product id which u want to delete :");
    scanf("%d",&id);

    while (fread(&tempprod,sizeof(product),1,fptr) ==1)
    {
        if (tempprod.id != id)
        {
            fwrite(&tempprod,sizeof(product),1,tempptr);
        }
        else
        {
            flag=1;
        }
    }
    fclose(fptr);
    fclose(tempptr);
    remove("storage.bin");
    rename("tempstorage.bin","storage.bin");
    if (!flag)
    {
        printf("product not found !!\n");
    }
    else
    {
        printf("product deleted succesfully !\n");     
    }
    char ch;
    scanf("%c",&ch);
}