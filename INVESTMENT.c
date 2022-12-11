#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int t,ir,ci;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d",&ir,&ci);
	    if(ir>=(2*ci)){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

