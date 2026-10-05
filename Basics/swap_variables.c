#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before swapping a = %d and b = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a = %d and b = %d",a,b);
    return 0;
}

//Method-2:-
// #include<stdio.h>
// int main()
// {
//     int x,y,temp;
//     printf("Enter x:");
//     scanf("%d",&x);
//     printf("Enter y:");
//     scanf("%d",&y);
//     printf("Before swapping x = %d and y = %d",x,y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("\nAfter swapping x = %d and y = %d",x,y);
//     return 0;
// }
