#include<stdio.h>
#include<math.h>
int main(){
struct student {
    char name[100];
    int roll;
    float cgpa;
};
struct student s1={"suman",143,98.7}; // only works in variables not array variables
printf("name: %s, roll:%d , cgpa: %f",s1.name,s1.roll,s1.cgpa);
    
return 0;
}