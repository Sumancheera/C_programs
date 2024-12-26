#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
struct all_branches {
char name[100];
int roll;
float cgpa;
};
struct all_branches cse[100]; // cse variable
strcpy(cse[0].name,"ak");
cse[0].roll=143;
cse[0].cgpa=9.8;

struct all_branches s1={"akshayani",777,99.99};

struct all_branches IT[100];
strcpy(IT[1].name,"suman");
IT[1].roll=143888888;
IT[1].cgpa=9.88899;

printf("%s",s1.name);
printf("name:%s",cse[0].name);
printf("roll:%d",cse[0].roll);
printf("marks:%f",cse[0].cgpa);
return 0;
}