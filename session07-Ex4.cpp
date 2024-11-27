#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Cac phan tu cua mang la: \n");
	for (int i = 0; i < n; i++) {
        printf("arr[%d]= %d \n",i,arr[i]);
		}
	return 0;
}