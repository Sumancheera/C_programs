#include<stdio.h>
#include<math.h>

int main(){
int num;
printf("enter the number: ");
scanf("%d",&num);

if (num>=0){
printf("number is positive\n");
if (num % 2 == 0){
printf("number is even\n");
}
else{
    printf("number is odd\n");
}

} else{
    printf("number is negative\n");
}
return 0;
}
