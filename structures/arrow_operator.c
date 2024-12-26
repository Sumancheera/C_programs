#include<stdio.h>
#include<math.h>
   struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
struct student s1={"suman",143,98.7};
struct student *ptr=&s1; //this is struct ptr// struct pointer.
printf("name: %s, roll:%d , cgpa: %f\n",s1.name,s1.roll,s1.cgpa);
printf("ptr roll:%d\n",(*ptr).roll);
// arrow operator  ptr->roll
printf("ptr arrow roll:%d\n",ptr->roll);

return 0;
}