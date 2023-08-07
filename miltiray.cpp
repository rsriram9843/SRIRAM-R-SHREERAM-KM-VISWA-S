#include<stdio.h>
int main()
{
	char a[10];
	scanf("%s",a);
	int m=0;
	for(int i=0;a[i]!='\0';i++)
	{
		m++;
	}
	char t;
	for(int i=m-1;i>=0;i--)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(int i=m-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
