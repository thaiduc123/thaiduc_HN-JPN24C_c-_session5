#include<stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	while (n!=0){
		sum += n%10;
		n /= 10;
	}
	printf("tong cac chu so la: %d", sum);
	return 0; 
} 
