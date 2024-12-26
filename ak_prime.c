#include<stdio.h>
int main(){
int n;
printf("enter thr num:");
scanf("%d",&n);
if (n==0 || n==1){  // 0 to 1
    printf("not a prime");
} 
else if(n==2 || n==3){   // 2,3
 printf("prime");
} else if (n>=4){   // 4 to 5,6,7...use this
for (int i = 2; i*i <=n; i++){  
  if(n%i==0){
    printf("not a prime");
  }else{
    printf("prime");
  }
}
}
    return 0;
}