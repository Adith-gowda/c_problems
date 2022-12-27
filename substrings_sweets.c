#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[1000];
    int k,count=0,isvowel=0;
    scanf("%s\n%d",a,&k);
    for(int i=0;i<strlen(a)+1;i++){
        for(int j=0;j<i;j++){
            isvowel=0;
            for(int h=j;h<i;h++){
                if(tolower(a[h])=='a'|| tolower(a[h])=='e'|| tolower(a[h])=='i'||tolower(a[h])=='o'||tolower(a[h])=='u'){isvowel++;}
            }
            if(isvowel==k){count++;}
        }
    }
    printf("%d",count);
    return 0;
}