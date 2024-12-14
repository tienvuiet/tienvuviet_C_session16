#include<stdio.h>
void mang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("a[%d]=%d ",i,*(a+i));
	}
} 
int main(){
	int a[5]={1,2,3,4,5};
	int n=5; 
	printf("tat ca cac so luong phan tu trong mang: ");
	mang(a,n);
	return 0;
} 
