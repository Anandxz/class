// program to swap any digit first digit and the laast digit
#include<stdio.h>
#include<math.h>
void main(){
    int n,first,last,temp,x=0,k,s,m,j;
    printf("Enter a two digit number: ");
    scanf("%d",&n);    // e.g 2314    output should be  4312
    last=n%10;         // 4
    int second=n;
    while (second!=0)
    {
        temp=second%10;
        x++;           // 4
        second/=10;

    }
    first=(n/(pow(10,x-1)));
    printf("%d",first);
      k=n-(first*(pow(10,x-1)));               // 2314-2000=313
      s=k-last;                                // 310
      m=s+first;                               // 312
      j=(last*(pow(10,x-1)) + m);              // 4000+312=4312
      printf("Yours %d after swapping is %d",n,j+1);

    
       
}
