#include <stdio.h>
int pattern(){
    int i,j;
    for(i=1;i<=5;i++){
        
        for(j=1;j<=5;j++){
         if(i==j){
            printf("*");
        }
        
           
        
        }
        printf("\n");
    }
    return 0;
}
int main(){
    pattern();
}