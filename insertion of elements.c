#include<stdio.h>
int main ()
{
    int pos,value,i,n;
    int a[10]={1,2,3,4,5,6,7};

    printf("Enter the number of total elements : ");
    scanf("%d",&n);
    printf("Enter %d elements : ", n);
    for(int i=0;i<n-1;i++){
        scanf("%d ",&a[i]);
    }
    //printf("\n\nEnter the value of element and position you want to insert in array: ");
   // scanf("%d%d",&value,&pos);

   for (int i=n;i>=pos;i--){
    a[i]=a[i-1];
   }

   printf("The Array is : \n\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
/*
    printf("\n\n After insertion The Array is : \n\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    } */
    return 0;
}
