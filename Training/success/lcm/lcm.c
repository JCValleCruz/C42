/*
unsigned int	lcm(unsigned int a, unsigned int b)
{
	int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
		
}
*/

unsigned int lcm (unsigned int a, unsigned int b)
{
	int aa = a;
	int bb = b;
	int i = 1;
	int c = 1;

	if (a == 0 || b == 0)
		return (0);

	while (aa != bb)
	{
		if (aa < bb)
		{
			aa = a * i;
			i++;
		}
		else
		{
			bb = b * c;
			c++;
		}
	}
	return (aa);
}

#include <stdio.h>
int main (void)
{
	unsigned int a = -1;
	unsigned int b = 2932;

	printf("%d\n",lcm (a, b));
	return (0);
}
