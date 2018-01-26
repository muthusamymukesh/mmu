#include<stdio.h>
void main()

{

    int a,i;

    printf("\nenter a:");

    scanf("%d",&a);
    for(i=0;a>0;a=a/10)
 {   
    i=i+1;
}
    printf("total number:%d",i);
}
