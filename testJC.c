#include <stdio.h>
int JC(int x)
{
	int i;
	int jc=1;
	if(x==1)return 1;
	else 
	{
		for(i=1;i<=x;i++)jc*=i;
		return jc;
	}
}
void main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("USAGE: \"./testJC number\"\n");
		return;
	}
	int sum=0;
	int i = atoi(argv[1]);
	sum = JC(i);
	printf("result:%d\n",sum);
}
