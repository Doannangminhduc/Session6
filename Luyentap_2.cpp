#include <stdio.h>
	int main(){
			int numb[5];
    int chan = 0, le = 0;

    printf("Moi ban nhap 5 so nguyen\n");
	for (int i = 0; i < 5; i++) {
        printf("So thu nhat %d: ", i + 1);
        scanf("%d", &numb[i]);
    }
	for (int i = 0; i < 5; i++) {
        if (numb[i] % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }
	printf("So chan la: %d\n", chan);
    printf("So le la: %d\n", le);

		return 0;
	}
