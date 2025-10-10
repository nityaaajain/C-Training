#include<stdio.h>
int main(){
    int a[]={2,3,5,7,4,8};
    for(int i=0;i<6;i++){
        int temp=0;
        for(int j=i+1;j<6;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int n,m;
    printf("Enter position:");
    scanf("%d",&n);
    printf("%d smallest no. is %d\n",n,a[n-1]);
    printf("\nEnter position:");
    scanf("%d",&m);
    printf("%d largest no. is %d\n",m,a[6-m]);
}