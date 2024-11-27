#include<stdio.h>

int main(){
	int i=0;
	int even=0;	
	int arr[5]={1,2,3,4,5};
	 printf("Mang co cac so chan la: \n");
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
			even = 1;
		}
	}
	if(even==0){
			printf("Mang khong co so chan");
		}
	return 0;
}