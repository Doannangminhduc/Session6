#include<stdio.h>
int main(){
	const int matkhau=12345;
	int nhapmatkhau;
	printf("mat khau la %d vui long nhap lai mat khau\n",matkhau);
	printf("Mat khau la:");
	scanf("%d",&nhapmatkhau);
	if(matkhau==nhapmatkhau){
	    printf("Dung roi\n");
	}else{
		printf("Sai roi\n");
	}
	return 0;
}
