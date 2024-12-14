#include<stdio.h>
int tong(int *input1, int *input2){
	return *input1+*input2;
}
int main(){
	int n=100,m=200;
	printf("ket qua tong m+n la: %d",tong(&n,&m));
	return 0;
}
