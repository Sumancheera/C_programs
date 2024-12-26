#include<stdio.h>
#include<math.h>
float Temparature( float celsius); // f=(c*9/5)+32. AND celsius to farahnoid convertion
int main(){
    printf("far is : %f",Temparature(37));


return 0;
}
float Temparature( float celsius){
    float far = (celsius* 9.0/5.0)+32;  // you can write
    return far;

}