#include<stdio.h>
#include<math.h>

int main(){
int age;
printf("enter the age:");
scanf("%d", &age);
/* 
if (age>= 18){
    printf("Adult\n");
    printf("they can drivr\n");
    printf("they can vote");
}
else if (age>13 && age <18){
printf("teenager\n");
} 
else{
printf("child\n");

} */
(age>=18)? printf("adult\n"): printf("not adult\n"); //ternary operation
printf("thank you"); 
return 0;
}