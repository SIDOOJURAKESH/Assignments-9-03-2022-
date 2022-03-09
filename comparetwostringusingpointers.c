#include<stdio.h>
#define size 100
int compare(char *str1,char *str2);
int main()
{
    int (*fp)(char *,char *);// fp is the Function Pointer that accepts two char pointer with return type int
    char str1[size],str2[size];
    int result;
    printf("enter the 1st string: \n");
    scanf("%[^\n]s",str1);
    printf("enter the 2nd string: \n");
    scanf("\n%[^\n]s",str2);
    fp=&compare; //Assigning the address of function to function pointer
    result=fp(str1,str2);// Passing the actual arguments to function pointer
    if(result==1)
    {
        printf("Both are equal\n");
    }
    else
    {
        printf("Both are not equal\n");
    }
    return 0;
}
int compare(char *str1,char *str2)
{
    int i=0,flag=1;
    const int *p=&flag;
    for(i=0;*(str1+i)!='\0';i++)
    {
        if((*(str1+i))!=(*(str2+i)))
        {
            flag=0; // Checking for two strings if two not equal then flag=0 else flag=1
            break;
        }
    }
    return flag;
}
    
