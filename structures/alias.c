#include<stdio.h>
#include<math.h>

typedef struct all_branches { //typedef structure defination
char name[100];
int roll;
float cgpa;
}allb;  // created alias or shotname// dont for get typedef
allb s1; // variable decleration
int main(){
    allb s2;
    allb s1={"akshayani",777,99.99};
    printf(" name :%s",s1.name);

return 0;
}