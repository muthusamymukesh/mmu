#include<stdio.h>

void main()

{

    int a,b,c;

    printf("\nenter a:");

    scanf("%d",&a);

    printf("\nenter b:");

    scanf("%d",&b);
    printf("\nenter c:");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("\n a is large");
    else if((b>a)&&(b>c))
    printf("\n b is large");
    else
    printf("\n c is large");

}
