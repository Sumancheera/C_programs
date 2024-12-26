#include<stdio.h>
#include<math.h>
int per_cal(int maths, int sc, int english);
int main(){
int maths=75,sc=80,english=70;
printf("marks percentageis : %d",per_cal(maths,sc,english));
return 0;
}
int per_cal(int maths, int sc, int english){
    int per = (maths+sc+english)/3;
    return per;
}
