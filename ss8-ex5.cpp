#include <stdio.h>

int main() {
    int bientren, bienduoi;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &bientren);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &bienduoi);
	    int a[bientren][bienduoi];
	    printf("Nhap cac phan tu cua ma tran:\n");
	    for (int i = 0; i < bientren; i++) {
	        for (int j = 0; j <bienduoi; j++) {
	        	printf("Nhap vao mang 2 chieu arr[%d][%d]:" ,i,j);
	            scanf("%d", &a[i][j]);
	        }}		
		    int tong = 0;
		    for (int i = 0; i < bientren; i++) {
		        tong += a[i][0] + a[i][bienduoi-1]; 
		    }
		    for (int j = 1; j < bienduoi-1; j++) {
		        tong += a[0][j] + a[bientren-1][j]; 
		    }							
				printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);
				return 0;
}
