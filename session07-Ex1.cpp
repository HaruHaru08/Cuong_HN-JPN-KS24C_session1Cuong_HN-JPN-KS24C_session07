#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("Do dai cua mang la: %d ",sizeof(arr)/sizeof(int));
	return 0;
}