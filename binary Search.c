#include<stdio.h>
int BinarySearch(int a[], int num, int n);
int main ()
{
    int a[20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,24,45,56,67,78,89,90},num,n=20;
    printf("Enter the elements you want to search : ");
    scanf("%d",&num);
    int result = BinarySearch(a,num,n);
    if(result == 0)
    {
        printf("\nNumber is not found  !!! \n");
    }
    else
    {
        printf("\n\nElement found at : %d\n ",result);
    }
    return 0;
}
int BinarySearch(int a[], int num, int n)
{
    int start = 0,end=n-1;
    while(start <= end)
    {
        int mid = (start +end)/2;
        if( a[mid] == num)
        {
            return mid;
        }
         else if(num > a[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    if(start > end){
        return 0;
    }
}

