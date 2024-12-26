#include<stdio.h>
#include<math.h>
int main(){
    // ptr2-ptr1 = 1(4 bytes);
    int age1=22,age2=23; //to see the diff we need same data types.
    int *ptr1=&age1,*ptr2=&age2;
    printf("difference of pointer is :%u\n",ptr1-ptr2);
    ptr2=&age1;
    printf("compare of pointers :%u\n",ptr1==ptr2); //if true it will return 1;

return 0;
}