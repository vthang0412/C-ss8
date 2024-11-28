#include <stdio.h>

int main() {
    int arr[5]; 
    int i; 
    for (i = 4; i >=0; i--) {
        printf("Nhap vao mot phan tu: ");
        scanf("%d", &arr[i]); 
    }
		    printf("Cac phan tu trong mang la:\n");
			    for (i = 4; i >=0; i--) {
			        printf("%d ", arr[i]);
			    }
			    return 0;
}

