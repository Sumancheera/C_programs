#include<stdio.h>
#include<math.h>

int main(){
//  for (int i=1; i<=5;i++){  // iterator/ counter
//    // printf("hello wprld");
//    printf("%d\n",i);
//  }
// for (int i=10;i>=1;i--){
//     printf("%d\n",i);
// }
// for (int i=0; i<=10;i++){
//     printf("%d\n",i);
// }
int i;

printf("enter the number:");
scanf("%d", &i);

while(i>=0){
    printf("%d\n",i);
    i--;
}

    return 0;
}