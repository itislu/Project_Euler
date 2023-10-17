#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

long 	largestPrimeFactor(long num);
bool	isPrime(long n);

int main(int argc, char **argv)
{
	long	num;
	long	result;

	if (argc == 1)
	{
		printf("Input number: ");
		scanf("%ld", &num);
	}
	else
	{
		num = atol(argv[1]);
	}

	result = largestPrimeFactor(num);
	printf("%ld\n", result);

	return (0);
}

long	largestPrimeFactor(long num)
{
	long	i;

	i = 2;
	while (!isPrime(num))
	{
		while (num % i != 0)
		{
			i++;
		}
		num /= i;
	}
	return (num);
}

bool	isPrime(long n)
{
	long	i;

	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (false);
		i++;
	}
	return (true);
}