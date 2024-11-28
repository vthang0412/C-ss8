#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
	int arr[n][n];
	for (int i=0; i<n ;i++){
		for (int j=0; j<n; j++){
			printf("Nhap vao mang 2 chieu arr[%d][%d]:" ,i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int max;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(max<arr[i][j]){
			   max = arr[i][j];
			}
		}
	}
	printf("Mang co phan tu lon nhat la: %d ",max);
	return 0;	
}
