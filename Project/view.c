#include "Product.h"
#include "gotoxy.h"
void viewProduct()
{
    FILE *ptr=fopen("storage.bin","rb");

    product vp;

    system("cls");
    int x=1,y=1;
    printf("%-20s   |  %-20s  |  %-20s   |  %-20s\n","    ID","    PRODUCT NAME","    PRICE","    QUANTITY");
    while (fread(&vp,sizeof(product),1,ptr))
    {
        printf(" %-20d  |  %-20s  |   %-20.2f  |   %-20d \n",vp.id,vp.name,vp.price,vp.quantity);
    }
    fclose(ptr);
    printf("There is no furthur items .....");
    char ch;
    scanf("%c", &ch);
}