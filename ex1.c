#include <stdio.h>
int main()
{
int i,k;
i=0;
k=0;
    for (i = 0;i!= 7; i++ ){
    k=0;
        while (k!=i){
         printf("*");
         k=k+1;
        }
    printf("\n");    
    }
   return 0;
}
