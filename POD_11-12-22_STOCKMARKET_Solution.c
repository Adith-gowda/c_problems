#include<stdio.h>
#include<stdlib.h>
int main(){
    int d1,d2;
    scanf("%d %d",&d1,&d2);
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            printf("%d ",d1);
        }
        else if(a[i]==2){
            printf("%d ",d2);
        }
        else{
            long int temp2=d2;
            long int temp1=d1;
            for(int j=1;j<=(a[i]-2);j++){
                long int temp=temp2;
                temp2=((3*temp2)+(4*temp1))%(1000000007);
                temp1=temp;
            }
            printf("%ld ",temp2);
        }
    }
    return 0;
}