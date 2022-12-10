#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
   char a[1000];
   scanf("%[^\n]s",a);
   int b[100],k=0;
   char * token=strtok(a," ");
   while(token!=NULL){
       b[k++]=strlen(token);
       token=strtok(NULL," ");
   }
   for(int i=0;i<k-1;i++){
       for(int j=0;j<k-i-1;j++){
           if(b[j]>b[j+1]){
               printf("NO");
               exit(0);
           }
       }
   }
   printf("YES");
   return 0;
}