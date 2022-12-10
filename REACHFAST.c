#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	int c=0,s,d,iter,j;
	for(int i=0;i<t;i++){
	    scanf("%d %d %d",&s,&d,&iter);
	    if(abs(s-d)==0){
	       printf("0\n");
	       continue;
	    }
	    else if(abs(s-d)<iter){
            printf("1\n");
	        continue;
	    }
	    c=0;
	    for(j=0;j<=abs(s-d);j=j+iter){
	        if(j>=abs(s-d)){
	            break;
	        }
	        c++;
	    }
	   printf("%d\n",c);
	}
	return 0;
}

