#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a > b)
	{
		if(b > c)
		{
			if(c > d)
			{
				printf("%d", d);
			}
			else
			{
				printf("%d", c);
			}
		}
		else
		{
			if(b > c)
			{
				printf("%d", c);
			}
			else
			{
				printf("%d", b);
			}
		}
	}
	else
	{
		if(a > c)
		{
			if(c > d)
			{
				printf("%d", d);
			}
			else
			{
				printf("%d", c);
			}
		}
		else
		{
			if(a > d)
			{
				printf("%d", d);
			}
			else
			{
				printf("%d", a);
			}
		}
	}

	return (0);
}
