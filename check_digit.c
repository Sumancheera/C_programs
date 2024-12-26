#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter number: \n");
    scanf("%d", &n);
    if (n>='0' && n<='9'){
        printf("gave digit");
    }else{
        printf("not a digit");
    }
    return 0;
}