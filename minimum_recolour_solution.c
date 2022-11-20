#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int k,p,flag=0,j,c=0,min=100,c1=0;
    scanf("%d",&k);
    int len=strlen(a);
    for(int i=0;i<len-k+1;i++){
        flag=0;p=k;j=i;c=0,c1=0;
        while(p>0){
            if(a[j]=='B'){
                c1++;
            }
            else{
                flag=1;
                c++;
            }
            j++;
            --p;
        }
        if(c1==k){
            printf("0");
            exit(0);
        }
        if(c<min){
            min=c;
        }
    }
    printf("%d",min);
    return 0;
}