/*
Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include <stdio.h>

int main() {

    int a, b;
    int swap;
    int *b1,*b2;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("\n swapping a = %d and b = %d", a, b);


    b1 = &a;
    b2 = &b;


    swap = *b1;
    *b1 = *b2;
    *b2 = swap;

    printf("\n swapping a = %d and b = %d", a, b);

}
