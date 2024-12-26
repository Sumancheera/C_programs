#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char ak[]=" akshayani";
    char suman[100]="suman"; // give extra for concatination.
    strcat(suman,ak); // first string should have enough space.
    puts(suman);
    strcpy(suman,ak); // cntl x and cntl v. not copy.
    puts(ak);
    puts(suman);
    strcat(suman,ak);
    puts(suman);
    
return 0;
}