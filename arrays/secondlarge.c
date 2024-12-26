#include<stdio.h>
#include<math.h>
int main(){ // to find the secong largest number in array
    int array[]={1,2,6,4,7,9,8,5,3};
    int n = sizeof(array)/sizeof(array[0]);
    int max1, max2;
    max1=array[0];// max1=1;
    for (int i = 1; i < n; i++)// i=1;i=2;i=3;i=4;i=5;i=6;i=7;i=8;
    {
        if(max1<array[i]){ // 1<2;2<6;6<4;6<7;7<9;9<8;9<5;9<3;
            max2=max1;     // max2=1;max2=2;max2=6;max2=7;
            max1=array[i]; //max1=2;max1=6;max1=7;max1=9;
        }else if(array[i]>max2&&array[i]!=max1){//to check last 2nd.//or (array[i]>=max2 && array[i]<max1)
            max2=array[i]; //max2=4;max2=8;
        }
    }
    printf("second large : %d",max2);
return 0;
}