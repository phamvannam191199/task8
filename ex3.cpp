#include<stdio.h>

int main(){
    char name[150];
    int age ,i, x;
    
    printf("nhap ten \n");
    gets(name);
    
    printf("nhap tuoi \n");
    scanf("%d",&age);
    
    fflush(stdin);
    printf("nhap sex :(m:male, f:female)");
    scanf("%c",&x);
    
	for(i=1;i<=age;i++){
    if(age>1  &&  age<19)
    printf("chao em");
    else if(age>=19  &&  age<=25)
    printf("chao ban");
    else if(26>=age  &&  age<=30)
    printf("chao anh chi");
    else if(age>=31 &&  age<=50)
    printf("chao co chu");
    return 0;
	}
	}
