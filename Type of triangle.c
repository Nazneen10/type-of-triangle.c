#include <stdio.h>
int main()
{
	double a,b,c;
	printf("entera,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);
	 if(a==b&&b==c)
	{
		printf("equilateral");
	}
	else if(a!=b&&b!=c)
	{
		printf("scalene");
		}
		else
		{
			printf("isosceles");
		}
Return 0;
	}

