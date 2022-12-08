//Smallest divisible number 
#include <stdio.h>
#include <stdlib.h>
int gcd(int c, int b)
{
    int r = ((c < b) ? c : b); 
    while (r > 0) {
        if (c%r==0 && b%r==0) {
            break;
        }
        r--;
    }
    return r;
}
long lcm(long n)
{
    long a= 1;   
    for (long i=2;i<= n;i=i+2)
        a=(a*i)/gcd(a,i);
    return a;
}
int main(){
    int n;
    scanf("%d",&n);
    if(lcm(n)>10000000){
        printf("No such number in range");
        exit(0);
        
    }
    printf("%d",lcm(n));
}
