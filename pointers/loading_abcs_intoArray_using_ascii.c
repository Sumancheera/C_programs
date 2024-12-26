#include<stdio.h>
#include<math.h>
#include <stdio.h>

int main() {
    // Declaration of variables
    char alph[27];  // Array to store alphabets
    char *ptr;  // Pointer to char

    // Displaying the purpose of the program
    printf("\n\n Pointer : Print all the alphabets:\n");
    printf("----------------------------------------\n");

    ptr = alph; // Assigning the base address of array 'alph' to pointer 'ptr'
// you can write char *ptr=alph; but not with &alph; because this is array addres by defaul it is with [0].
    // Storing alphabets in the array using pointer arithmetic
    for (int x = 0; x < 26; x++) {
        *ptr = x + 'A'; // Assigning ASCII values of alphabets to the array through the pointer
        printf(" %c ", *ptr); 
        ptr++; // Moving the pointer to the next memory location
    }

    // ptr = alph; // Resetting the pointer to the base address of array 'alph'

    // // Printing the stored alphabets using the pointer
    // printf(" The Alphabets are : \n");
    // for (x = 0; x < 26; x++) {
    //     printf(" %c ", *ptr); // Printing each alphabet
    //     ptr++; // Moving the pointer to the next memory location
    // }
    printf("\n\n"); // to give double space after the abcd series.
    return 0;
}