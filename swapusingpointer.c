#include<stdio.h>
#define SIZE 100
int Swap(int [],int [],int );
int main()
{
    int (*fp)(int [],int [],int);
    int arr1[SIZE],arr2[SIZE],i,n;
    int const *ptr=&n;
    printf("Enter size of two arrays: ");
    scanf("%d",&n);
    printf("Enter elements in an array1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements in an array2: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    fp=Swap;
    fp(arr1,arr2,n);
    return 0;
}

int Swap(int arr1[],int arr2[],int n)
{
    int *const a=arr1;
    int *const b=arr2;
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    }
    printf("After swapping elements of array1 and array2: \n");
    printf("array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
    printf("array2: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }
    printf("\n");
    return 0;
}
