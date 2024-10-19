// Program to print unkown length of Array
#include<stdio.h>
int main(){
    int Arr[]={25,50,75,100};
    int lenght=(sizeof(Arr))/(sizeof(Arr[0]));
    int i;
    for(i=0;i<lenght;i++){
        printf("%3d\t",Arr[i]);
    }
    return 0;
}