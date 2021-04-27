#include<stdio.h>
int main(){
	int arr[5],arr2[5];
	int i;
	
	printf("nhap so can dao nguoc");
	
	for (i=0;i<5;i++){
	printf("nhap so thu %d:\n",i+1);
	scanf("%d",&arr[i]);
	}
    printf("nhap so dao chieu");
    for(i=4;i>=0;i--){
	printf("so thu %d=%d\n",5-i,arr[5]);
	arr[i]=arr2[4-i];
	}

	
	
	
	
	
	return 0 ;
	}
	

