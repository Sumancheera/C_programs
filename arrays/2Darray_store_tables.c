#include<stdio.h>
#include<math.h>
void print_table(int arr[][10], int n, int m, int num);
int main(){
int tables[2][10];
print_table(tables,0,10,2);
print_table(tables,1,10,3);
for (int i = 0; i < 10; i++)
{
    printf("%d ",tables[0][i]);
}
printf("\n");
for (int i = 0; i < 10; i++)
{
    printf("%d ",tables[1][i]);
}
return 0;
}
void print_table(int arr[][10], int n, int m, int num){  // size is must to mention 2D array.[10].
    for (int i = 0; i < m; i++)
    {
        arr[n][i]=num*(i+1);  // this is the main logic to print and store at a time in array.
    }
}
