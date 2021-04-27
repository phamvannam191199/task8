#include<stdio.h>

int main(){
	int arr [10];
	int i;
	int max, min;
	int total=0;
	int arg;
	
	for (int i=0;i <10;i++);
	
	printf ("nhap so %d\n",i+1);
	scanf("%d",&arr[i]);
	if(i==0)
	{
		min=arr[0];
		max=arr[0];
		
	if(max<arr[i])max=arr[i];
	if(min>arr[i])min=arr[i];
	}
	total +- arr[i];
	
		
	printf("\nmax - %d",max);
	printf("\nmin - %d",min);
	printf("\ntotal - %d",total);
	printf("\navg - %d", total/10);
	
	
	}
	

