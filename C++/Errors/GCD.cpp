//Program to find GCD


#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "Enter two no.s " << endl;
	cin >> m >> n;
	//error in the below segment
//-------------
	while (m != n and m != 0 and n != 0)
	{
		if (m >= n)
			m = m - n;
		else
			n = n - m;
	}
	cout << "GCD is " << m;
//-------------
	return 0;
}
