#include<stdio.h>
#include<math.h>
int main(){
    FILE *fptr;
    int n;
    fptr=fopen("odd.txt","w");
    printf("enter n:");
    scanf("%d",&n); 
    for (int i = 1; i < n; i++)
    {
        if(i%2!=0){
            fprintf(fptr,"%d ",i);
        }
    }
    
    fclose(fptr);
return 0;
}