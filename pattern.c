#include <stdio.h>
#include <stdlib.h>

main(){
	int i,j,r,a,k;
	printf("enter no. of rows:");
	scanf("%d",&r);
//for row
	for(i=1;i<=r;i++){ 
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}printf("\n");
	
		
	}
}

