#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sotiencanrut;
	
	printf(" chao mung ban den  voi ngan hang  b bank");
	printf("nhap so tien can rut:");
	scanf("%d",&sotiencanrut);
	if(sotiencanrut%50000==0)
	printf("rut tien thanh cong!");
	else
	printf("so tien can rut khong du 50000!\n, vui long nhap lai");

	
	
}
