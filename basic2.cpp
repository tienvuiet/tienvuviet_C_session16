#include<stdio.h>
void swap(int *input1, int *input2){
	int temp=*input1;
	*input1=*input2;
	*input2=temp;
}
int main(){
	int n=10;
	int m=20;
	printf("gia tri cua n ban dau la: %d\n",n);
	printf("gia tri cua m ban dau la: %d\n",m);
	swap(&n,&m);
	printf("gia tri cua n sau thay doi la: %d\n",n);
	printf("gia tri cua m sau thay doi la: %d\n", m);
	
}
