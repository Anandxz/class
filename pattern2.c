//program to print a pattern
#include<stdio.h>
void main(){
int i,j;
for(i=0;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("  ");
    }
    for(j=5-i;j>=1;j--)
      {
        printf(" *");
      }
     printf("\n");
      
}

}