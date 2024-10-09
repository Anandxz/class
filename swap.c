//program to swap any digit first digit and the laast digit
#include<stdio.h>
#include<math.h>
void main(){
    int n,temp,x=0,j;
    printf("Enter a two digit number: ");
    scanf("%d",&n);    // e.g 2314    output should be  4312
    int second=n;
    while (second!=0)
    {
        temp=second%10;
        x++;           // 4
        second/=10;

    }

      j=((n%10)*(pow(10,x-1))+(((n-((n/(pow(10,x-1)))*(pow(10,x-1))))-(n%10))+(n/(pow(10,x-1)))));              // 4000+312=4312
      printf("Yours %d after swapping is %d",n,j+1);

}