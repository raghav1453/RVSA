#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables name

    int item1,item2,item3;
    float cost1,cost2,cost3,subtotal,total1,total2,total3,tax;

    // value from user

    printf("ENTER THE QUANTITY AND COST OF NESTEA :");
    scanf("%d%f",&item1,&cost1);

    printf("ENTER THE QUANTITY AND COST OF REDBULL :");
    scanf("%d%f",&item2,&cost2);

    printf("ENTER THE QUANTITY AND COST OF COCA-COLA :");
    scanf("%d%f",&item3,&cost3);

    //calculations

    total1= (item1*cost1);
    total2= (item2*cost2);
    total3= (item3*cost3);

    subtotal= total1+total2+total3;
    tax= subtotal + 0.13*subtotal;

    //printing reciept

    printf("*******************************************************************************************************\n");
    printf("*******************************************RECIEPT*****************************************************\n\n");

    printf("ITEM NO.\tITEM NAME\t\tQUANTITY\t\tCOST OF ITEM\t\tTOTAL Amount\n\n");

    printf("   1    \t NESTEA    \t\t      %d\t\t\t   $%.2f   \t\t $%.2f\n",item1,cost1,total1);
    printf("   2    \t REDBULL   \t\t      %d\t\t\t   $%.2f   \t\t $%.2f\n",item2,cost2,total2);
    printf("   3    \t COCA-COLA \t\t      %d\t\t\t   $%.2f   \t\t $%.2f\n\n",item3,cost3,total3);
     //printing total cost including tax

    printf("\tTOTAL COST : $%.2f\n\n",subtotal);

    printf("\tTOTAL COST(INCLUDING TAXES) : $%.2f\n\n",tax);

    //printing name and student number

    printf("********************************************************************************************************\n");
    printf("*************RAGHAV SHARMA*****************************N01537255****************************************\n");


    return 0;
}
