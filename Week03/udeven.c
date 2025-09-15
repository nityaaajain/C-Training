#include<stdio.h>
int even(a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(even(n)){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
}