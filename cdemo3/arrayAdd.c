#include <stdio.h>

void arrayAdd(int* arr, int s, int n)
{
	for (int i = 0; i < s+1; i++)
	{
		arr[i] = arr[i] + n;
	}
}

int main()
{

	int arr[100];
	int *ref = arr;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i * i;
		printf("Squared: %d\n", arr[i]);
	}

	arrayAdd(ref, 100, 5);

	for (int i = 0; i <100; i++)
	{
		printf("Squared + n: %d\n", arr[i]);
	}

}
