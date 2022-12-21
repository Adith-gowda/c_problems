#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            for(int h=j;h<n-1;h++){
                if((i+j+h)==n && (i+j)<=h){
                        c++;
                }
            }
        }
    }
    printf("%d ",c);
    return 0;
}