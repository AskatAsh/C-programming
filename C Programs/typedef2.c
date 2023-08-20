#include<stdio.h>

struct book{
    char name[20];
    int price;
};
int main()
{
    typedef struct book boi;
    boi b1= {"Amar boi", 540};
    printf("Book name = %s\n",b1.name);
    printf("Book price = %d\n\n",b1.price);

    boi b2 = {"Tomar boi", 423};
    printf("Book name = %s\n",b2.name);
    printf("Book price = %d\n",b2.price);

}
