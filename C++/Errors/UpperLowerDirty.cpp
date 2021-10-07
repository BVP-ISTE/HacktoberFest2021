
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
char str1 [30], temp[30];
cout << "Enter the string:";
cin >> str1;

strcpy (temp, str1);
strupr(temp);
cout << "strupr (tmp) : " << temp << endl;

strlwr(temp);
cout << "strlwr (tmp) : " << temp << endl;
system("pause");
 
return 0;
}
