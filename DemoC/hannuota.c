#include<stdio.h>

int move(int n,char a,char b,char c)
{
	if(n == 1)
		printf("%c-->%c\n",a,c);
	else
	{
		move(n-1,a,c,b);
		move(1,a,b,c);
		move(n-1,b,a,c);
	}
	return 0;	
}
int main()
{
	int n;
	scanf("%d",&n);
	move(n,'a','b','c');
	return 0;
}