//SOLUTION 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
float dist(float b,float c){
    float t=sqrt((b*b)+(c*c));
    return t;
}
int main(){
    int n;
    scanf("%d",&n);
    float x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("Given x-y co-ordinates are in the order : ");
    for(int i=0;i<n;i++){
        printf("(%.2f,%.2f)  ",x[i],y[i]);
    }
    int i,j;
    float curr;
    for(i=1;i<n;i++){
        curr=dist(x[i],y[i]);
        float t=x[i],l=y[i];
        j=i-1;
        while(j>=0 && dist(x[j],y[j])>curr){
            x[j+1]=x[j];
            y[j+1]=y[j];
            j--;
        }
        x[j+1]=t;
        y[j+1]=l;
    }
    printf("\n\nExpected output : ");
    for(int h=0;h<n;h++){
        printf("(%.2f,%.2f)  ",x[h],y[h]);
    }
}