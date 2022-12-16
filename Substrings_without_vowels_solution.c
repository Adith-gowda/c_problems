#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100],b[100];
    int n,k=0,flag=1;
    scanf("%s\n%d",a,&n);
    for(int i=0;i<=strlen(a);i++){
        k=0;
        while (k < n) {
            b[k++] = a[i+k-1];
        }
        b[k] = '\0';
        flag=1;
        if(strlen(b)==n){
            for(int j=0;j<=strlen(b);j++){
                if(b[j]=='a' || b[j]=='e'|| b[j]=='i'|| b[j]=='o'|| b[j]=='u'){
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("%s\n",b);
            }
        }
    }
    return 0;
}