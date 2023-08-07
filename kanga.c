#include<stdio.h>
void main(){
	int x1,y1,x2,y2,i,f=0;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	for(i=0;i<=700;i++){
		x1=x1+y1;
		x2=x2+y2;
		if(x1==x2){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("YES");
	}else{
		printf("NO");
	}
}
