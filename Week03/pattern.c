#include <stdio.h>
int main()
{
    int max=3;

    for(int i=0; i<max;i++){
        for(int j=max;j>i;j--){
            printf("^");
        }
        printf("\n");
    }
    return 0;
}