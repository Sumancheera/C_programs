#include<stdio.h>
#include<math.h>

int main(){
    int age=22;
    int *pointer = &age; // ptr=pointers;
    // int _age=*pointer;
    // printf("%d",_age);
    printf("%p\n",&age); // these are all to print addresses.
    printf("%p\n",pointer);
    printf("%p\n",&pointer);
    printf("%u\n",&age); // type casting from hexa decimal address %p to un signed int %u.
    // to print values.
    printf("%d\n",age);
    printf("%d\n",*pointer);
    printf("%d\n",*(&age));
return 0;
}