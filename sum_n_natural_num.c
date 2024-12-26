#include<stdio.h>

int main(){
int n,sum=0;
printf("enter the num:");
scanf("%d",&n);
for( int i=1,j=n;i<=n&&j>=1;i++, j--){ // we can merge 2 loops at one but it should statr and end at same times.
    sum=sum+i;   // sum +=i;
   // printf("%d\n",i);
    printf("%d\n",j);
}
printf(" sum of n naatural num is : %d\n",sum);

// for(int j=n;j>=1;j--){
//     printf("%d\n",j);
// }

    return 0;
}