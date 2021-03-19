#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],n=10,temp;
    printf("Enter 10 Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n\nAfter sorting the array using Bubble sort :\n\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] >a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    printf("\n\n sorting the array using Bubble sort in decreasing order:\n\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] <a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}
