#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char * argv[]){
	int age ;
	char gender,kind;
	char name[150];
	printf("nhap do tuoi tu (18-21):\n");
	scanf("%d",&age);
	
	printf("nhap gioi tinh(male or female)\n ");
	fflush(stdin);
	//xóa bo nho dem
	scanf("%c", &gender);
	
	printf("nhap tinh cach (kind or bad)\n");
	scanf("%c",&kind);
	
	printf("nhap ten (thao)\n");
	gets(name);
	
	if(age==19)
	{printf("xung doi vua lua\n");
	scanf("%d",&age);
	}
	else if (gender=='female')
	{printf("hop ly \n");
	}
	else if ( )
{	printf("phu hop\n");
	}
	else 
	printf("ten kha hop\n");
	
	
	

	}
