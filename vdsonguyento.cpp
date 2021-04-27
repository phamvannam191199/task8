#include<stdio.h>
#include<math.h>
int SNT(int n){
		int i;
		int j;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
			return 0;
		}
		}
	return 1;
	}
	int main(){
		int i,j=0;
		for(i=3;i<1000;i+=2){
			if(SNT(i))
			printf("\n so nguyen to %d",j++,i);
			}
			}
			
		
