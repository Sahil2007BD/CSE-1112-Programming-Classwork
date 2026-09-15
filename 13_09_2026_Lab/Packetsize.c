#include <stdio.h>

int main() {
    int a ;
    float b ;
    char c ;
    double d ;


    int result, result1, result2, result3;

    result = sizeof(a);
    result1 = sizeof(b);
    result2 = sizeof(c);
    result3 = sizeof(d);

    printf("Size of integer variable a: %d bytes\n", result);
    printf("Size of float variable b: %d bytes\n", result1);
    printf("Size of character variable c: %d bytes\n", result2);
    printf("Size of double variable d: %d bytes\n", result3);




    // 



    return 0;
    
}
