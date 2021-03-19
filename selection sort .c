#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a[10],n=10,i,j,temp;
    printf("Enter 10  Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\nafter applying selection sort , The array should be : \n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;

}
