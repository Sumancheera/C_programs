#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    // calloc continuos allocation
    //initializes with 0 by defoult in all the memorey locations
    int *ptr; int n;
    ptr=(int *)calloc(n,sizeof(int));

printf("enter n:");
scanf("%d",&n);
    for (int i = 0; i < n; i++){
    printf("%d\n",ptr[i]); // zeros will print
}
return 0;
}