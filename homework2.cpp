#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int a[99];
	int n, i, j, k;
	int sum = 0;
	int max = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int sum = 0;

			for (int k = i; k <= j; k++)
			{
				sum += a[k];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	cout << max;
	return 0;
}