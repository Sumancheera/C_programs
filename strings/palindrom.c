#include <stdio.h>
#include <string.h>
int main() {
    char arr[]="madam";
    char arr2[5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 5/2; i++)
    {
        char firstval=arr[i];
        char lastval=arr[5-i-1];
        arr[5-i-1]=firstval;
        arr[i]=lastval;
    }
    //printf("%d",strcmp(arr2,arr)); // if equal it gives 0
    for (int i = 0; i < 5; i++) {
        if (arr[i] != arr2[i]) {
            printf("Not equal \n");
        } else {
            printf("They are equal/ palindrom. \n");
        }
     }
return 0;
}

