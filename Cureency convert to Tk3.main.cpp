#include <iostream>

using namespace std;

int main()
{
    double money, rate;
    int choice;
    cout << "Enter your choice :" << endl
         << "1-USD to taka" << endl
         << "2-loti to taka" << endl
         << "3-dong to taka" << endl
         << "4-birr to taka" << endl
         << "5-leu to taka" << endl;

    cin >> choice;
    cout << "Enter the ammount : ";
    cin >> money;
    switch (choice)
    {
    case 1:
    {
        rate = money * 102.01;
        cout << rate;
        break;
    }
    case 2:
    {
        rate = money * 5.60;
        cout << rate;
        break;
    }
    case 3:
    {
        rate = money * 0.0041;
        cout << rate;
        break;
    }
    case 4:
    {
        rate = money * 1.90;
        cout << rate;
        break;
    }
    case 5:
    {
        rate = money * 5.29;
        cout << rate;
        break;
    }

    default:
    {
        cout << "Enter valid choice! ";
        break;
    }
    }

    return 0;
}
