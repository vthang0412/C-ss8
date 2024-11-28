#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
	    int a[n][n];
	    printf("Nhap cac phan tu cua ma tran:\n");
	    for (int i = 0; i < n; i++) {
	        for (int j = 0; j < n; j++) {
	            printf("Nhap phan tu a[%d][%d]: ", i, j);
	            scanf("%d", &a[i][j]);
	        }
	    }
		    int sum = 0;
		    printf("Cac phan tu tren duong cheo: ");
		    for (int i = 0; i < n; i++) {
		        printf("%d ", a[i][i]);  
		        sum += a[i][i];         
		    }
    printf("\nTong cac phan tu tren duong cheo: %d\n", sum);
    return 0;
}
