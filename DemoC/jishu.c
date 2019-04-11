 #include <stdio.h>
 _Bool isodd(int i)
{
	return (i % 2) != 0;
}
int main()
{
	int i;
	scanf("%d",&i);
	printf("%d\n",isodd(i));
	return 0;
}