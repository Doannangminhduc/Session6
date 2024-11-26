#include <stdio.h>

	int main() {
	 int numb, sumOdd = 0, count = 0;
	 printf("Nhap vao so nguyen:\n");
	 while (count < 5) {
        scanf("%d", &numb);
        if (numb % 2 != 0) {
            sumOdd += numb;
        }
        count++;
    }

    printf("Tong cac so le la: %d\n", sumOdd);
		return 0;
	
		
		
	}
