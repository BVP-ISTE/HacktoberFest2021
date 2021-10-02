#include <iostream>
using namespace std;
int main()
{
	int n, r, sum = 0;
	cout << "Enter a no. ";
	cin >> n;
//error in the below segment
//-------------
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
//-------------
	cout << sum;
	cout << endl;
}
