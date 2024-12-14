#include<stdio.h>
int main(){
	int y=20;
	int *yPtr=&y; 
	printf("cach 1:\n");
	printf("dia chi cua bien y la: %d\n",&y);
	printf("gia tri cua bien y la: %d\n",y);
	printf("cach 2:\n");
	printf("dia chi cua bien y duoc luu tru trong yPtr la: %d\n",yPtr);
	printf("gia tri ma yPtr dang tham chieu toi la: %d\n",*yPtr);
	
}
