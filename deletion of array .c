#include<stdio.h>
int main()
{
    int n ,i,pos,num;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Elements :",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("You Entered array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\nEnter the number you want to delete from the array : ");
    scanf("%d",&pos);

    for(int i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\n\nAfter deletion  The array is : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

