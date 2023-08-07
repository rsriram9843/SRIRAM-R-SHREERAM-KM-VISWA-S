#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int f=((n/5)*5)+5;
	if(f>=40 && f-n<3){
		printf("%d",f);
	}
	else{
		printf("%d",n);
	}
	
	
}
