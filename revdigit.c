//code to reverse the digit  
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:-"); //example 123
    scanf("%d",&num);
    while(num!=0)
    {
        int temp=num%10;
        printf("%d",temp); 
        num=num/10;  
    }
    
    
    
}