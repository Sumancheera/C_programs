#include<stdio.h>

int main(){
int day; // 1-mon; 2-tue; 3- wed; 4- friday; 5-thursday ; 6- sunaday; 7 saturday.

printf("enter day(1-7) : ");
scanf("%d", &day);

switch (day){ // in condition enter any constant to check with cases, line character a,b,c or number 1,2,3.
    case 1: printf("monday\n"); // nester switch is allwed ex: year, afrernoon, morning. or time.
    break;
    case 2: printf("tuesday\n");
    break;
    case 3: printf("wednesday\n");
    break;
    case 6: printf("friday\n");
    break;
    case 5: printf("thursday\n");
    break;
    case 4: printf("sunday\n");
    //break;
    case 7: printf("saturday\n");
    break;
    default : printf("entered above 7, not valida day\n");
 
}



return 0;
}
