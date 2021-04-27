#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int sumarr(int arr[],int size)
	{
	int i;
	int total=0;
	for(i=0;i<size;i++)
	total += arr[i];
	return total;
}	
	int main(){
		int myarr[4]={1,2,3,4};
		int r= sumarr(myarr,4);
		printf("sum=%d",r);
		return 0;
		
		
	
}
