// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, f = 1;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (f == 1)
            {
                cout << "1 ";
                f = 0;
            }
            else if (f == 0)
            {
                cout << "0 ";
                f = 1;
            }
        }
        cout << endl;
    }
}
