#include<stdio.h>
int main () {
    int n,qty[10] ,i;
    float amount[10] ,cost[10] , total;
    printf("Enter the number product the user bought :");
    scanf("%d" , &n);
    for(int i=0;i<n;i++){
        printf("\nFor the product No. %d",i+1);
        printf("\nEnter cost of the product : ");
        scanf("%f",&cost[i]);
        printf("Enter Quantity of the product : ");
        scanf("%d",&qty[i]);
        printf("\n");
    }
    printf("\n-----------------BILL----------------\n");
    printf("S.No.\tCost\tQuantity\tAmount\n");
    for(int i=0;i<n;i++){
            amount[i]=cost[i]*qty[i];
            total +=amount[i];
            printf("%d\t%.2f\t%d\t%.2f",i+1,cost[i],qty[i],amount[i]);
            printf("\n");
    }
    printf("Total Amount is :  %f",total);
    return 0;
}
