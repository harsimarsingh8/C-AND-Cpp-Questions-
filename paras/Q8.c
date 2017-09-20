//counter game
#include<stdio.h>
main()
{
	int num,x,cnt=0;
	printf("Enter a number for player A to start the game:");
	scanf("%d",&num);
	x=num-1;
	while(x)
	{
		if(x & 1)
		{
			cnt++;
		}
		x=x>>1;
	}
	if(cnt%2)
	{
		printf("Player A wins!!!",cnt);
	}
	else
	{
		printf("Player B wins!!!",cnt);
	}
}
