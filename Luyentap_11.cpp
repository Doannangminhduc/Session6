#include <stdio.h>

	int main(){
	 
		int n;
		printf("Nhap vao so N bat ky:\n");
		scanf("%d",&n);

		int count = 0; 
		int number=2;
		while( count<n){
			int flag =0;
			for (int i =2; i<number;i++){
				if(number%i==0){
					flag= 1;
					break;
				}
			}
			if(flag==0){
				printf("%1d ", number);
				count++;
			}
			number ++;
		}
		return 0;
	}
