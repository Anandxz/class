//code to check whether a number is prime or not
#include<stdio.h>
void main()
{
    int p;
    printf("Enter any nnumber");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        if (p%i==0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
        
        
        
    }
    
    
}