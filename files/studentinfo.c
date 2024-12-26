#include<stdio.h>
#include<math.h>
int main(){
    FILE * fptr;
    char name[100]; int age; float cgpa;
    fptr=fopen("student.txt","w");
    printf("enter name :");
    scanf("%s",name); printf("enter  age :"); scanf("%d",&age);
    printf("enter cgpa:");scanf("%f",&cgpa);
    fprintf(fptr," name:%s\n",name);
    fprintf(fptr,"age :%d\n",age);
    fprintf(fptr," cgpa:%f\n",cgpa);
    fclose(fptr);
return 0;
}