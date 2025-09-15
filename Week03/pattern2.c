#include <stdio.h>
int main()
{
    int max=3;
    int i,k,j;


    for(i=0; i<max;i++){
        for(j=max;j>i;j--){
            printf(" ");
        }
       for(int k=0;k<=i;k++){
            printf("^");
        }
        printf("\n");
    }
    return 0;
}