#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    // free(ptr); this is the syntax
    int *ptr;
    ptr=(int *)calloc(4,sizeof(int));
    for (int i = 0; i < 4; i++){
    printf("%d\n",ptr[i]); // zeros will print
}
free(ptr); // completey disallocates
// freeing 4 to 2, by allocation 2 again newly
ptr=(int *)calloc(2,sizeof(int));
  for (int i = 0; i < 2; i++){
    printf("%d\n",ptr[i]); // zeros will print
}
return 0;
}