#include "Product.h"
void editProduct()
{
    FILE *fptr=fopen("storage.bin","rb+");
    int id,flag=0,size=sizeof(product);
    // printf("struct product size= %d \n",size);
    system("cls");
    printf("enter product id which u want to edit :");
    scanf("%d",&id);
    product tempstr;
    while (fread(&tempstr,sizeof(product),1,fptr)==1)
    {
        if (tempstr.id==id)
        {
            printf("position -> %d \n",ftell(fptr));
            printf("Product Record Found !!\n");
            printf("id : %d \n",tempstr.id);
            printf("name : %s \n",tempstr.name);
            printf("price : %f \n",tempstr.price);
            printf("quantity : %d \n",tempstr.quantity);

            printf("==============Enter new Record ============== \n");
            printf("enter new product id -> ");
            scanf("%d%*c",&tempstr.id);
            printf("enter new product name -> ");
            scanf("%[^\n]%*c",tempstr.name);
            printf("enter new product price -> ");
            scanf("%f",&tempstr.price);
            printf("enter new product quantity -> ");
            scanf("%d",&tempstr.quantity);
            fseek(fptr,-size,SEEK_CUR);
            fwrite(&tempstr,sizeof(product),1,fptr);
            flag=1;
            break;
        }     
    }
    fclose(fptr);

    if (flag==1)
    {
        printf("product edited succesfully !\n");
    }
    else
    {
            printf("product not found !\n");
    }
    
    char ch;
    scanf("%c",&ch);
     
}
// SEEK_CUR 1