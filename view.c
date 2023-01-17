#include "Product.h"
#include "gotoxy.h"
void viewProduct()
{
    FILE *ptr=fopen("storage.bin","rb");

    product vp;

    system("cls");
    int x=1,y=1;
    while (fread(&vp,sizeof(product),1,ptr))
    {
        gotoxy(x+=5,y++);
        printf(" %d %s %0.2f %d",vp.id,vp.name,vp.price,vp.quantity);
    }
    fclose(ptr);
    char ch;
    printf("\nPress enter to continue  else press any key...  ");
    scanf("%c", &ch);
}