#include<stdio.h>
#include<math.h>
int main(){ //pointer arthematic ptr++ or ptr--;
// we can increment/ decrement int/char/float anything in the Array
            printf(" how int works\n\n");
    int age=22;
    int *ptr=&age;  // int / float same it will take 4 bytes of memory;
printf("ptr value(or)add of age:%u\n",ptr);
ptr++;
printf("ptr value(or)add of age:%u\n",ptr);
ptr--;
printf("ptr value(or)add of age:%u\n",ptr);

printf(" how charectors works\n\n");

char symbol[]={'$','*','@'};
char *ptr2=symbol; // or =&symbol[0];
printf("symbols are :%c %c %c\n",symbol[0],symbol[1],symbol[2]);
printf("ptr2 :%u\n",ptr2);
printf("val is %c\n",*ptr2);
ptr2++;
printf("ptr2 :%u\n",ptr2);
printf("val is %c\n",*ptr2);
ptr2--;
printf("ptr2 :%u\n",ptr2);
printf("val is %c\n",*ptr2);

        printf(" how float works\n\n");

float price=20.00;
float *ptr3=&price;
printf("ptr3 is %u\n",ptr3);
ptr3++;
printf("ptr3 is %u\n",ptr3);
ptr3--;
printf("ptr3 is %u\n",ptr3);

return 0;
}