#include<stdio.h>

int main(){
    int x,y;
    printf("enter table & no of rows:\n");
    scanf("%d %d",&x,&y);

for(int i=1;i<=y;i++){  //dinamic table print 
    printf("%d\n",x*i);
}
    return 0;
}