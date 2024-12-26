#include <stdio.h>
#include <string.h>
void stringlenth(char str[]);
int main()
{
    char str[] = "Akshayani";
    // Calling strlen with Str as argument
      int len = strlen(str);
    printf("Length of the String is %d\n", len);
    stringlenth(str);
    return 0;
}
void stringlenth(char str[]){
  int count=0;  // '\0' is the last elemt in the string// null character
  for (int i = 0; str[i] != '\0'; i++) // null denotes string termination.
  {
    count++;
  }
  printf("Length of String is %d",count); 
}