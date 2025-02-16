#include<stdio.h>
#include<math.h>
   typedef struct {
    char name[100];
    int roll;
    float cgpa;
}stack;
int main(){
stack s1={"suman",143,98.7};
stack *ptr=&s1; //this is struct ptr// struct pointer.
printf("name: %s, roll:%d , cgpa: %f\n",s1.name,s1.roll,s1.cgpa);
printf("ptr roll:%d\n",(*ptr).roll);
// arrow operator  ptr->roll
printf("ptr arrow roll:%d\n",ptr->roll);

return 0;
}