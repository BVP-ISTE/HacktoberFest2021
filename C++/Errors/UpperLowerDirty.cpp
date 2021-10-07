
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
char str1 [30];
cout << "Enter the string:";
cin >> str1;

strupr(str1);
cout << "strupr (tmp) : " << str1 << endl;

strlwr(str1);
cout << "strlwr (tmp) : " << str1 << endl;
system("pause");
 
return 0;
}
