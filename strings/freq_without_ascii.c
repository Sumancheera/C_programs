#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int max_count=0;
    char ch=str[0];
    int i,j;                // if you check with !='\0' it will give one extra space because i=0; 
    for (int i = 0; i < strlen(str); i++){ 
        int current_count=1;                
        for (int j = i+1; j< strlen(str); j++){  //and empty space atlast check.
            if(str[i]==str[j]){
                current_count++;
            }
        }  //akshayani
        if(max_count<current_count){// initially max=0 then 1after(str[0])then it has to be 2 atleast to chage max,ch.
            max_count=current_count;
            ch=str[i];
        } 
    } 
    printf(" the max repeated letter: %c and its frequency is :%d",ch,max_count); 
return 0;
}