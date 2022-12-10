#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,t,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        t=a[i];
        c=0;
        while(t>0){
            if(t%2==0){
                t=t/2;
                c++;
            }
            else{
                t=t-1;
                c++;
            }
        }
        printf("%d ",c);
    }
    return 0;
}