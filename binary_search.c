/*Given a sequence of n numbers (real or integers) and a number k (k is one among the n numbers ), write an algorithm and the
corresponding code to compute the position of k if the given n numbers are arranged in an increasing order, using insertionsort. 
If the 2, −1, 3, 0, 7 and 3 are the input , your program should output 4 since 3 will be in the fourth position (starting
from 1), in the sorted (increasing ) order. You are expected to code the problem two different ways, say, c1 , c2 using
two different approaches. Decide whether c1 is efficient or c2 is efficient based on the running time T(n) of the resepctive codes.*/

//BINARY SEARCH METHOD

#include<stdio.h>
#include<stdlib.h>
int binarySearch(int b[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (b[m] == x)
            return m+1;
        if (b[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n],h=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&k);
    int i,j,curr;
    for(int i=1;i<n;i++){
        curr=a[i];
        j=i-1;
        while(j>=0 && a[j]>curr){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;
    }
    int result = binarySearch(a, 0, n - 1, k);
    if(result==-1){
        printf("Element is not present in array");
    }
    else{
        printf("Element %d is present at index %d",k,result);
    }
    return 0;
}