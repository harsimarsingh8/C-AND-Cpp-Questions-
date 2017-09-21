/*AIM: First 100 prime numbers */
#include<stdio.h>
main()
{
	int i=2,num=2,cnt=0,prime;
	while(cnt<100)
	{
		prime=1;
		if(num==2)
		{
			printf("2 ");
			num++;
			cnt++;
		}
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		{
			printf("%d ",num);
			cnt++;
		}
		num++;
	}
}
