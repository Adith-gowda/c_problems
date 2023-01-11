#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[1000];
    scanf("%s",a);
    scanf("%s",b);
    int k=1,j,flag=0,count=1;
    for(int i=0;i<strlen(a);i++){
        if(b[0]==a[i]){j=i;break;}
    } 
    for(int i=j+1;i<strlen(a);i++){
        if(b[k]==a[i]){
            if(i-j<0){
                printf("No");
                flag=0;
                break;
            }
            count++;j=i;k++;
            flag=1;
        }
    }
    if(flag==1 && count==strlen(b)){printf("Yes");}
    else{printf("No");}
    return 0;
}
