#include<stdio.h>
int main() {
    int a, b,sum;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Integers entered: %d, %d\n", a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);
    float average = (float) sum / 2.0;
    printf("Average of %d and %d is %.2f\n", a, b, average);


    return 0;
}