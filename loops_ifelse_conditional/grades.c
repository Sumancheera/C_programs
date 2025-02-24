#include<stdio.h>
#include<math.h>

int main(){
int marks;
printf("enter marks: ");
scanf("%d",&marks);

if (marks>=0 && marks<30){ // preventing from entering -ve marks.
    printf("C\n");
}else if (marks>=30 && marks<70){
    printf("B\n");
} else if(marks>=70 && marks<90){
    printf("A\n");
} else if(marks>=90 && marks <=100){
    printf("A+\n");
}else {
    printf("wrong marks"); // if enter above 100
}



return 0;
}