// code to sum the digit of input number123456789
#include<stdio.h>
void main()
{
    int num,res=0;
    printf("Enter any number we will give you sum of digit:-");
    scanf("%d",&num);
    while (num>0)
    {
        res=res+num%10;
        num=num/10;
        
    }
    printf("%d",res);
        
    
    
}    
    

