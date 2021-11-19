#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j, m = i;
        for (j = 0; m != 0; j++)
        {
            m /= 10;
        }
        int p = pow(10, j);
        if (i == (i * i) % p)
            cout << i << endl;
    }
}
