/*
INPUT FORMAT :
5
2 -8 5 1 -6

OUTPUT FORMAT :
The given Array is : 2 -8 5 1 -6 
The Customized sorted Array is : 1 -8 2 5 -6 
*/

//solution in c 

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[100],d[100],d1[100],k=0,l=0,c=0,h=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
        c++;
        if(a[i]>=0){
            b[k++]=a[i];
        }
        else{
            d1[l]=a[i];
            d[l]=c;
            l++;
        }
    }
    printf("The given Array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if(b[j]>b[j+1]){
                int t=b[j+1];
                b[j+1]=b[j];
                b[j]=t;
            }
        }
    }
    printf("\nThe Customized sorted Array is : ");
    int h1=0;
    for(int i=0;i<n;i++){
        if(i==(d[h]-1)){
            printf("%d ",d1[h]);
            h++;
        }
        else{
            printf("%d ",b[h1]);
            h1++;
        }
    }
    
}