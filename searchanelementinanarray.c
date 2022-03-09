#include<stdio.h>
#define size 100
int search(int ,int *,int);
int main()
{
    int n,m,i;
    int arr[size];
    int flag;
    int (*fp)(int ,int *,int);
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter to search an element: ");
    scanf("%d",&m);
    fp=&search;
    flag=fp(n,arr,m);
    if(flag==1)
    {
        printf("%d is present in array",m);
    }
    else
    {
        printf("%d is not present in array",m);
    }
    return 0;
}
int search(int n,int *arr,int m)
{
    int i;
    int flag=0;
    const int *p=&flag;
    
    
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            flag=1;
            break;
        }
    }
    
    return flag;
}
    
    
