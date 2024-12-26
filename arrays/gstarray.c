#include<stdio.h>
#include<math.h>
int main(){
    float price[]={100.0,200.0,300.0};
    // or float price[3]={100.0,200.0,300.0};

    // float price[3];
    // printf("enter 1st price:");
    // scanf("%f",&price[0]);
    // printf("enter 2nd price:");
    // scanf("%f",&price[1]);
    // printf("enter 3rd price:");
    // scanf("%f",&price[2]);

    printf("total price 1 with gst : %f\n",price[0]+(price[0]*0.18));
    printf("total price 2 with gst : %f\n",price[1]+(price[1]*0.18));
    printf("total price 3 with gst : %f",price[2]+(price[2]*0.18));

return 0;
}