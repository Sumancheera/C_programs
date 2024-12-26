#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int y;
    printf("enter the num and rows:");
    scanf("%d %d",&n, &y);
for (int i=y;i>=1;i--){
    printf("%d\n", n * i);
}



    return 0; 
}