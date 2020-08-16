/*
 * C Program to Convert Binary to Hexadecimal
 */
#include <stdio.h>

int main()
{
    long int binary, hexa = 0, i = 1, remainder;//initializing variable
    printf("Enter the binary number: ");   //output
    scanf("%ld", &binary);    // taking input
    while (binary != 0)     //while loop
    {
        remainder = binary % 10;
        hexa = hexa + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }                      // end while loop
    printf("THe Equivalent hexadecimal value: %lX", hexa);   // final output
    return 0;
}
