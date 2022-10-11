//time complexity O(2^N)
#include<iostream>

using namespace std;

int Fibonnacci(int n)
{
	if (n == 0)
		return 0;

	else if (n == 1)
		return 1;

	else
		return (Fibonnacci(n - 1) + Fibonnacci(n - 2));
}

int main()
{
	int n, flag = 0;
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << Fibonnacci(flag) << " ";
		flag += 1;
	}
	return 0;
}