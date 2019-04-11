 #include <stdio.h>
 int main()
 {
 	long long x,k,y = 1,count = 0;

 	printf("please input:\n");
 	scanf(" %lld %lld",&x,&k);
 	while(k)
 	{
 		if((x + y) == (x|y))
 		{
 			count ++;
 			if(count == k)
 			{
 				printf("%lld\n",y);
 				return 0;
 			}
 		}
 		y++;
 	}
 	return 0;
  }