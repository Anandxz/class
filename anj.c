#include <stdio.h>

int main() {
    int num, temp, sum, digit;

    printf("Armstrong numbers between 1 and 1000 are: ");
    for (num = 100; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + ( digit * digit * digit) ; // Cubing the digit pow(digit,n)
            temp = temp/10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
