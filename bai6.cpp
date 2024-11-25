#include<stdio.h>

int main(){
	float a,b,c;
	int opt = 0;
	int temp = 1;
	printf("CACULATOR");
	printf("1. Tong hai so\n");
	printf("2. Hieu hai so\n");
	printf("3. Tich hai so\n");
	printf("4. Thuong hai so\n");
	printf("5. Thoat\n");
	do{
		printf("chon phuong thuc tinh: ");
		scanf("%d", &opt);
		switch (opt){
			case 1:{
				printf("so dau: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a + b;
				printf("ket qua: %.2f\n", c);
				break;
			}
			case 2:{
				printf("so dau: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a - b;
				printf("ket qua: %.2f\n", c);
				break;
			}
			case 3:{
				printf("so dau: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a * b;
				printf("ket qua: %.2f\n", c);
				break;
			}
			case 4:{
				printf("so dau: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a / b;
				printf("ket qua: %.2f\n", c);
				break;
			}
			case 5:{
				printf("Da thoat");
				goto end;
			}
		}
	} while (temp=1);
	end:
	return 0; 
} 
