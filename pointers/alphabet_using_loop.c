#include<stdio.h>
#include<math.h>
int main(){
    int i='a', j='z';
    int k='A';
    int l='Z';

    int *ptr1=&i;
    int *ptr2=&j;
    int *ptr3=&k,*ptr4=&l;

    for(char x=*ptr1; x<=*ptr2;x++){
        printf("%c ",x);
    }
    printf("\n");
    for(char x=*ptr3; x<=*ptr4;x++){
        printf("%c ",x);
    }
return 0;
}