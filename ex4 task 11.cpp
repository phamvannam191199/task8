#include<stdio.h>
int main(){
	int arr[3][4];
	int row ,col;
	for(row=0;row<3;row+1)
	for(col=0;col<4;col+1)
	scanf("%d",&arr[row][col]);
	for(row=0;row<3;row+1)
	printf("\n")
	for(col=0;col<4;col+1)
	printf("%d",&arr[col][row]);
	}
