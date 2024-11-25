#include<stdio.h>

int main(){
	int n;
	begin:
	printf("Nhap vao so duong: ");
	scanf("%d", &n);
	if (n<=0){
		printf("nhap lai\n");
		goto begin;
	} else {
		for (int i=1; i<=10; i++){
			printf("%d x %d = %d\n", n, i, n*i );
		}
	}
	return 0; 
} 
