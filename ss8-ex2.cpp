#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n, i;
    while(1){
    printf("Nhap vao mot phan tu can tim: ");
    scanf("%d", &n);
	    for (i = 0; i < 5; i++) {
	        if (arr[i] == n) {
	            printf("Vi tri phan tu trong mang la: %d\n", i+1);
	            return 0;
	        }
	    }
		        printf("Phan tu khong ton tai trong mang.\n");
	}
    return 0;
}

