#include<stdio.h>

int main(){
	int n=1;
	do{
		for (int i=1; i<=9; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
		++n;
		printf("\n");
	} while (n<=9);
	return 0; 
} 
