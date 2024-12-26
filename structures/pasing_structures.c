#include<stdio.h>
#include<math.h>

  struct student { // struct can be outside the main, 
    char name[100];
    int roll;
    float cgpa;
};
void printstruct(struct student s1); // even struct related functions declared after struct defination.
struct student s1={"suman",143,98.7}; // you can write all the code related to the struct outside the main.
int main(){
printstruct(s1); // only call with variable name enough

return 0;
}
void printstruct(struct student s1){
    printf(" the name is:%s\n",s1.name);
printf(" the roll is:%d\n",s1.roll);
printf(" the cgpa is:%f\n",s1.cgpa);
}