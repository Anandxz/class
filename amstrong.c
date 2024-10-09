#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter any number of 3 digit:-");
    scanf("%d",&d); // let 153
    c=d%10;         //  3
    b=(d/10)%10;    //  5
    a=d/100;        //  1
    e=((a*a*a)+(b*b*b)+(c*c*c));
    
    
       if (e==d)
       {
        printf("Yes %d is a amstrong number",d);
       }
       else
       {
        printf("Your number is not  a amstrong number");
       }
       
       
    
    return 0;
}