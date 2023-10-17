#include <stdio.h>
#include <stdlib.h>

int fiboEvenSum(int num);

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

	result = fiboEvenSum(num);
	printf("%d\n", result);

	return (0);
}

int fiboEvenSum(int num)
{
	int n1;
	int n2;
	int tmp;
	int sum;

	n1 = 1;
	n2 = 2;
	sum = 0;
	while (n2 <= num)
	{
		if (n2 % 2 == 0)
			sum += n2;
		tmp = n2;
		n2 += n1;
		n1 = tmp;
	}
	return (sum);
}