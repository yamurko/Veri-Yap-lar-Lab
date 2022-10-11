// time complexity O(N)
#include<iostream>

using namespace std;

void countdown(int n)
{
	for(int i = n; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;
}


int main()
{
	int n;
	cout << "Enter a integer number: ";
	cin >> n;
	countdown(n);
	return 0;
}
