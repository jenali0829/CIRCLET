#include<stdio.h>
main(){
	char r='A';
	char c='B';
	
	
	for(r='A'; r<='E'; r++){
	for(c='A'; c<=r; c++){
		printf("%c",r);
	}
	printf("\n");
}
}
