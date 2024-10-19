// Program to find smallest number in array
#include<Stdio.h>
int main(){
    int a[5]={5,2,1,4,5};
    int i,smallest;
    smallest=a[0];
    for(i=0;i<5;i++){
    if(a[i]<smallest)
    smallest=a[i];
    }
    printf("Smallest=%d",smallest);
    return 0;
}
