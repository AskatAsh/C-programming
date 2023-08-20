#include<stdio.h>
int main()
{
    int choice;
    float f,c;
    printf("type 1 for farenheit to celcius\n");
    printf("type 2 for celcius to farenheit\n");
    printf("Make your choice: ");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            {
                printf("Enter a farenheit value: ");
                scanf("%f",&f);
                c = ((f-32)*5)/9;
                printf("%.2fdeg farenheit to celcius is : %.2f\n",f,c);
            }break;
        case 2:
            {
                printf("Enter a celcius value: ");
                scanf("%f",&c);
                f = ((9*c)/5)+32;
                printf("%.2fdeg celcius to farenheit is : %.2f\n",c,f);
            }break;
        default:
            printf("you have made the wrong choice\n");
    }
}
