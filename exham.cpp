#include<stdio.h>
int main(){
	int a,b;
	char opera;
	printf("nhap vao so a:");
	scanf("%d",&a);
	printf("nhap vao so b:");
	scanf("%d",&b);
	printf("nhap vao phep toan: ");
	scanf("%c",&opera);
	switch (opera)
	{
		case'+':
			printf("%d + %d =%d",a,b,a+b);
		    break;
        case'-':
        	printf("%d - %d =%d",a,b,a-b);
        	break;
        case'*':
        	printf("%d * %d =%d",a,b,a*b);
            break;
        case'/':
        	if(b==0){
        	printf("khong the chia cho 0!");
        	}else{
			printf("%d/%d=%.2f",a,b,(float)a/b);
			}break;
			
				}
				}
