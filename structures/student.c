#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    struct student{ // structure defination
        char name[100];
        int roll;
        float cgpa;
    };
struct student s1; // structure variable.
strcpy(s1.name,"suman");
s1.roll=146710517;
s1.cgpa=63.5;
printf(" the name is:%s\n",s1.name);
printf(" the roll is:%d\n",s1.roll);
printf(" the cgpa is:%f\n",s1.cgpa);

struct student s2;
strcpy(s2.name,"akshayani");
s2.roll=143;
s2.cgpa=9.9;

printf(" the name is:%s\n",s2.name);
printf(" the roll is:%d\n",s2.roll);    
printf(" the cgpa is:%f\n",s2.cgpa);
return 0;
} // continous location lo store avthadi memory, first string of 100 then int 4 and float 8.