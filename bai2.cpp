#include<stdio.h>

int main(){
	int n = 1;
	int temp; 
	while (n=1){
		printf("nhap vao so nguyen: ");
		scanf("%d", &temp);
		if (temp == 50){
			printf("Dung roi");
			break;
		} else{
			printf("Nhap lai\n");
		}
	} 
	return 0; 
} 
