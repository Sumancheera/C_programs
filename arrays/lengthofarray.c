#include<stdio.h>
#include<math.h>
int main(){
    int array[]={1,2,6,4,7,9,8,5,3};
    int length= *(&array+1)-array; // addres of 1st array[0], then +1 ,means next addres of total array, * means pointing to that addres - array/ array[0]
    // gives the length of the array  
    printf("length is : %d",length);
return 0;
}