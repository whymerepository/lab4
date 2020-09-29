#include <stdio.h>
#define LENGTH 10

int main()
{
	int arr[LENGTH], arr2[LENGTH], num = 0, sum = 0;

	for (int i = 0; i < LENGTH; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < LENGTH; i++)
		scanf_s("%d", &arr2[i]);

	for (int i = 0; i < LENGTH; i++)
		if (arr[i] * arr2[i] > 10)
		{
			num++;
			sum += arr[i] * arr2[i];
		}

	printf("Number of pairs: %d\nSum of nums: %d", num, sum);

	return 0;
}