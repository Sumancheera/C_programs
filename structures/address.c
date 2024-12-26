#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct adressof5students{
    int housenum;
    char block;
    char city[100];
    char state[50];
}adr;
int main(){
    adr adds[5]; // decleration of variable
    for (int i = 0; i < 5; i++)
    {
        adds[i].housenum=i+12;
        adds[i].block=i+'A';
        strcpy(adds[i].city,"hyderabad");
        strcpy(adds[i].state,"TS");
    }
    // printing
    for (int i = 0; i < 5; i++)
    {
        printf(" house num : %d\n",adds[i].housenum);
        printf("block: %c\n",adds[i].block);
        printf("city : %s\n",adds[i].city);
        printf("city : %s\n",adds[i].state);
        printf("\n");
    }
    
    
return 0;
}