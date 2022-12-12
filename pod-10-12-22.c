/*Pricipal Numbers
A proper factor of a number is a factor of the number other than itself. Given a collection of numbers, a number n1 in position ‘i’ is said to be principal number if the largest proper factor of all numbers in position > i is lesser than or equal to the largest proper factor of n1. The last number in the collection is a principal number. For example, given five numbers 29, 15, 5, 9 and 11, the output should be 15, 9 and 11.

Input Format

First line contains the number of elements, n

Next ‘n’ lines contain the elements in the collection

Output Format

Print the principal numbers one on each line

SOLUTION:
*/

#include <stdio.h>
#include <stdlib.h>
int check(int arr){
    int max=1;
    for(int i=1;i<arr;i++){
        if((arr%i==0) && (i > max)){
            max=i;
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n],k=0;
    for(int i=0;i<n;i++){
        b[k++]=check(a[i]);
    }
    int flag=0;
    for(int i=0;i<k;i++){
        flag=0;
        for(int j=i+1;j<k;j++){
            if(b[i]>=b[j]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",a[i]);
        }
    }
    printf("%d",a[n-1]);
}
