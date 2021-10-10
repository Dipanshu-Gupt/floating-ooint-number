/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char random_number[100];
    int f = 0, i = 0;

    printf("Enter the number to check itself: ");
    scanf("%s", random_number);

    while (random_number[i++] != '\0') {
        if (random_number[i] == '.') {
            f = 1;
            break;
        }
    }

    if (f)
        printf("\n%s is a floating-point number.\n", random_number);
    else
        printf("\n%s is an integer number.\n", random_number);
    
    return 0;
}