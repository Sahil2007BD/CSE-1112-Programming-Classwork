#include<stdio.h>
int main() {
    char n[20];
    char d[20];
    char u[50];
    printf("What is your name?: ");
    scanf("%s", n);
    printf("What is your department?: ");
    scanf("%s", d);
    printf("What is your university?: ");
    scanf("%s", u);

    printf("My name is %s\n", n);
    printf("Dept. of %s\n", d);
    printf("%s\n", u);


    // This program prompts the user to input their name, department, and university. It then reads the input using scanf and stores it in character arrays. Finally, it prints the collected information back to the console.
    

    return 0;
}