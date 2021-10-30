// Welcome to the example of great BUFFER , we we wrire input for a varibale it does not directly
// associated with the varibale for at the intance when u are writng some number from keyboard before hitting
// enter it first stored in buffer and after u hit enter it goes from buffer to the memory associated with
// the variable and in this case we are checking if cin fail(means if variale is int and u enter a charcter accidently)
//we clear cin.clear that means we clear the buffer
// and cin.ignore means to ingore one chracter only from the buffer that means if u write p2 then it will ignore
// first chracter and take 2 as its input for a varible,
// int i = 0;
// while (i != -1)
// {
//     cout << "Enter a number (-1 to exit): ";
//     cin >> i;
//     if (cin.fail())
//     { //Error flag
//         cout << "Not a valid number!\n";
//         cin.clear();
//         cin.ignore(1); //number of characters or delim character
//     }
//     else if (i != 1)
//         cout << "The number is: " << i << '\n';

#include <iostream>
#define DATA_ERROR -1
#define ILLEGAL_OPERATION -2
using namespace std;
class math
{
    int a, b;
    char operation;

public:
    math()
    {
        int d;
        a = mightThrow();
        b = mightThrow();
        cin >> operation;
        d = check_oper(operation);
        cout << d << "\n";
    }
    int mightThrow()
    {
        int i;
        cin >> i;
        if (cin.fail())
        {
            cin.clear();
            throw DATA_ERROR;
        }
        return i;
    }
    int check_oper(char c)
    {
        if (c == '+')
            return a + b;
        else if (c == '-')
            return a - b;
        else if (c == '*')
            return a * b;
        else if (c == '/' && b != 0)
            return a / b;
        else if (c == '/' && b == 0)
            throw DATA_ERROR;
        else
            throw ILLEGAL_OPERATION;
    }
};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        try
        {
            math m;
        }
        catch (int a)
        {
            if (a == DATA_ERROR)
                cout << "DATA_ERROR\n";
            else if (a == ILLEGAL_OPERATION)
                cout << "ILLEGAL_OPERATION\n";
        }
    }
    return 0;
}
