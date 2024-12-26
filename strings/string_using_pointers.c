#include<stdio.h>
#include<math.h>
int main(){ // we can re-initialize, char array, using pointers.
char *canchange="My dear chittipu";
puts(canchange);
canchange="chittipu";
puts(canchange);

char cannotchange[]="Akshayani";
puts(cannotchange);
// cannotchange[]="ak";
// puts(cannotchange);

return 0;
}