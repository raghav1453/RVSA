#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;

    printf("ENTER THE NUMBER 1: ");
    scanf("%d",&num1);
    printf("ENTER THE NUMBER 2: ");
    scanf("%d",&num2);
    printf("ENTER THE NUMBER 3: ");
    scanf("%d",&num3);


    if (num1 > num2)

{   if (num1 > num3)
    printf(" %d is the biggest number.",num1);
    else
    printf(" %d is the biggest number.",num3);
}
    else

{   if (num2 > num3)
    printf("%d is the biggest number.",num2);
    else
    printf("%d is the biggest number.",num3);



}
    return 0;
}
