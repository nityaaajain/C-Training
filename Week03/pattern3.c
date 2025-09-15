#include <stdio.h>
int main()
{
    int max=8;
    int i,k,j;


    for(i=0; i<max;i++){
        for(int k=0;k<=i;k++){
            printf(" ");
        }
        for(j=max;j>i;j--){
            printf("^");
        }
       if(i==4) break;
        printf("\n");
    }
    return 0;
}