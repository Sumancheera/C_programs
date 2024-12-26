#include<stdio.h>
#include<math.h>

int main()
{ // find number is between 9 and 100
    int x;
    printf("enter the number:");
    scanf("%d", &x);
if(x>9){
if(x<100){
printf("x is 2 digit number%d\n");
} else{
    printf("the entered number is above 100");
}
    } else{
        printf("entered number is lessthan 9");
    }


//printf("%d\n", x>9 && x<100);

    return 0;
}
