#include <stdio.h>
#include <stdlib.h>

int multiplesOf3or5(int num);

int main(int argc, char **argv)
{
	int num;
	int result;

	if (argc == 1)
	{
		printf("Input number: ");
		scanf("%d", &num);
	}
	else
	{
		num = atoi(argv[1]);
	}

	result = multiplesOf3or5(num);
	printf("%d\n", result);

	return (0);
}

int multiplesOf3or5(int num)
{
	int sum;
	int i;

	sum = 0;
	i = 0;
	while (i < num)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	return (sum);
}