#include <iostream>

using namespace std;

int main()
{
    int num, first = 0, second = 1, fibo = 0, count = 0, j = 0;
    int result[6];
    cout << "Enter a how many times ";
    cin >> num;

    for (; count <= num;)
    {
        cout << first << " ";
        if (count == num - 6 || count == num - 5 || count == num - 4 || count == num - 3 || count == num - 2 || count == num - 1 || count == num)
        {
            result[j] = first;
            j++;
        }

        fibo = first + second;
        first = second;
        second = fibo;
        count++;
    }
    cout << endl
         << endl
         << "Last 6 Digits " << endl;
    for (int y = 1; y < 7; ++y)
    {
        cout << result[y] << "  ";
    }

    return 0;
}

