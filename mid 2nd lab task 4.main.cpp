#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char mystring1[]
  = {'w', 'e', ' ', 'h', 'a', 'v', 'e', ' ', 't', 'o', '\0'};
    char mystring2[] = "we\0have";
    char mystring3[100];
    // print 1st array using for loop
    for (int i = 0; i <= 10; i++)
    {
        cout << mystring1[i];
    }
    cout << endl;
    // print 2nd array using for loop
    for (int i = 0; i <= 7; i++)
    {
        cout << mystring2[i];
    }
    cout << endl;
    // concatenate both
    strcat(mystring1, mystring2);
    cout << mystring1 << endl;
    // compare both
    int res = strcmp(mystring1, mystring2);
    cout << res << endl;
    // find the length of both
    cout << strlen(mystring1) << endl;
    cout << strlen(mystring2) << endl;
    // concat and copy to another string
    strcat(mystring1, mystring2);
    strcpy(mystring3, mystring1);
    cout << mystring3 << endl;
    return 0;
}
