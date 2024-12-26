#include<stdio.h>
#include<math.h>
int count_occarance(int arr[], int n, int x);
void print_array(int arr[], int n);
int main(){
    int num_count;int num;
    printf("enter the num u need to count: ");
    scanf("%d",&num);
    int arr[18]={0,1,1,2,3,3,4,4,4,5,6,6,7,8,8,9,9,9};
    print_array(arr,18);
    printf("\n");
    printf("num %d is occured :%d",num,count_occarance(arr,18,num));
    // for (int i = 0; i < 18; i++)  // to print all in loop without entering but it will print same 2,3 time depends on same num repeated in the array.
    // {
    //     num_count=count_occarance(arr,18,arr[i]);
    //     printf("\n");
    //     printf("the num %d is occured : %d times.",arr[i],num_count);
    // }
return 0;
}
void print_array(int arr[], int n){  // just to print
    printf("Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
} // to count how many time repeatred 
int count_occarance(int arr[], int n, int x){
    int count=0;  // always initialize 0 for starting values in the funs you make. in main we dont need.
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            count++;
        }
    }
    return count;
}