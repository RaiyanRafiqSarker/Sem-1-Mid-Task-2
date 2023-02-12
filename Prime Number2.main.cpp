#include <iostream>

using namespace std;

int main()
{
    for (int q = 0; q < 5; q++)
    {
        int n, i, c = 0;

        cout << "Enter any number n: ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << n << " is a Prime number" << endl;
            int i, fact = 1;

            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            cout << "Factorial of " << n << " is: " << fact << endl;
        }
        else
        {
            cout << n << " is not a Prime number" << endl;
        }
    }
    return 0;
}

