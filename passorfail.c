#include<stdio.h>
#include<math.h>

int main(){
int marks;
printf("enter marks: ");
scanf("%d",&marks);

if (marks>=0 && marks<=30){ // cover all possibilities, with 101 marks 
    printf("fail\n");
}else if(marks>30 && marks <=100){
    printf("Pass\n");
}else{
    printf("wrong marks"); // if enter >100 marks
    
}
//marks <=30 ? printf("fail\n"): printf("pass\n"); //

    return 0;
}