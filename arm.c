#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum, digit,n;

    printf("Enter digit value");
    scanf("%d",&n);

    for (num = pow(10,n-1); num <= pow(10,n); num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += (pow(digit,n)) ; // Cubing the digit pow(digit,n)
            temp = temp/10;
        }

        if (sum == num) {
            printf("  %d \n", num);
        }
    }
    printf("\n");

    return 0;
}
