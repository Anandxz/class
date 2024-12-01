// Program to find fibonacci  series up to n terms. i.e ,0,1,1,2,3,5,8,13
#include<stdio.h>
int main(){
    int n,a1=0,a2=1,sum;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    
    for(int i=3;i<n;i++){
        sum=a1+a2;
        printf("%d",sum);
        a1=a2;
        a2=sum;
    }
    return 0;
}
