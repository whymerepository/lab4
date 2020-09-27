#include <stdio.h>
#define LENGTH 10

int main()
{
	int arr[LENGTH];
	int num = 0;

	for (int i = 0; i < LENGTH; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < LENGTH; i++)
	{
		if (arr[i+1] > arr[i])
		{
			num++;
			for (int j = i; j < LENGTH; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					i = j + 1;
					break;
				}
			}
		}
	}

	printf("\n%d", num);

	return 0;
}