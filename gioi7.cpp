#include<stdio.h>
void xapxep(int *arr, int size){
	for(int i=0;i<size-1;i++){
		int min=i;
		for(int j=i+1;j<size;j++){
			if(*(arr+j)<*(arr+min)){
				min=j;
			}
		}
		int temp=*(arr+min);
		*(arr+min)=*(arr+i);
		*(arr+i)=temp;
	}
	for(int i=0;i<size;i++){
		printf("%d ",*(arr+i));
	}
	}
    int main (){
    int a[5]={32,12,24,2,3};
    printf("mang sau khi duoc xap xep la: ");
    xapxep(a,5);
    return 0;
}

