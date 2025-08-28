#include<stdio.h>
float main()
{
    float a,b,c;
    printf("ENTER AMOUNT IN DOLLARS THAT U NEED TO BE CONVERTED INTO POUNDS \n");
    scanf("%f",&a);
    b=a*48;
    c=b/70;
    printf("CONVERTED AMOUNT IN POUNDS IS %f",c);
}
