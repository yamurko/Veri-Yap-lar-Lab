// time complexity O(N)
#include<iostream>

using namespace std;

int SumOfN(int n)
{
	int i = 1;
	int sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter a integer number: ";
	cin >> n;
	cout << "Sum = " << SumOfN(n);
	return 0;
}