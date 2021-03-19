#include<stdio.h>
int main(){
    int a[20]={1,2,3,4,5,6,7,8,9,10,22,44,66,88,99,33,2,23,45,50};
    int num,i,found=0,count=0;
    printf("Enter the number you want to search : ");
    scanf("%d",&num);
    for(i=0;i<20;i++){
        if(a[i] == num){
            printf("Number if found at %d\n",i+1);
            found =1;
        }
    }
    if(found == 0){
        printf("\n\nNumber is not found !!!\n");
    }
    return 0;
}
