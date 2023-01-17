
#ifndef Product
    #define Product
    #include<stdio.h>
    #include<stdlib.h>
    typedef struct Product
    {
        int id;
        char name[50];
        float price;
        int quantity;
    }product;
#endif