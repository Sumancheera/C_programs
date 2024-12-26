#include<stdio.h>
#include<math.h>
float gstfinal(float value);

int main(){
float value=100;
gstfinal(value);
printf("value for the product %f\n",value);  // here after calculating the final price with gst, 
//still it will give 100, this is called parameters - pass by value. it wont changes main function data.

return 0;
}
float gstfinal(float value){
    value = value + (0.18*value);
    printf("final price with GST: %f\n",value);
}