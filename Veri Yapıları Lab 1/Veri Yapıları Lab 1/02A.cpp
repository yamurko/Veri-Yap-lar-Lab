//time complexity O(N)
#include<iostream>

using namespace std;

void NaturalNum(int n)
{
	if (n)
		NaturalNum(n - 1);
    else
        return;
	cout << n << " ";
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	NaturalNum(n);
	return 0;
}
