#include<stdio.h>
#include<math.h>

float Area_square(float side);
float Area_rectangle(float a, float b);
float Area_circle(float rad);

int main(){
// float n;   // finding powers using a library function or pre- defined.
// printf("enter the num:");
// scanf("%f",&n);
// printf(" pow is: %f",pow(n,2));
float side = 7.0,rad=8.0,a=3.0,b=5.0;;
printf("Area of Square is :%f\n",Area_square(side));
printf("Area of Rectangular is :%f\n",Area_rectangle(a, b));
printf("Area of Circle is :%f\n",Area_circle( rad));

return 0;
}

float Area_square(float side){
    return side*side;
}
float Area_circle(float rad){
    return 3.14*rad*rad;
}
float Area_rectangle(float a, float b){
    return a*b;
}