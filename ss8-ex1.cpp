#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
	    int arr[n];
	    printf("Nhap %d phan tu vao mang:\n", n);
	    for (int i = 0; i < n; i++) {
	        printf("Nhap phan tu %d: ", i + 1);
	        scanf("%d", &arr[i]);
	        }    
		    printf("Cac phan tu trong mang tu cuoi ve dau la:\n");
		    for (int i = n-1; i >= 0; i--) {
		        printf("%d ", arr[i]);
		    }
		    printf("\n");
    return 0;
}
