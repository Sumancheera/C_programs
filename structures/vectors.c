#include<stdio.h>
#include<math.h>
 struct vectors
    {
        int x;
        int y;
    };
    void add(struct vectors v1,struct vectors v2,struct vectors sum){
        sum.x=v1.x+v2.x;
        sum.y=v1.y+v2.y;
        printf("sum is %d and %d",sum.x,sum.y);
    }
int main(){
    struct vectors v1={10,5};
    struct vectors v2={6,4};
    struct vectors sum={0};
     add(v1,v2,sum);

return 0;
}
