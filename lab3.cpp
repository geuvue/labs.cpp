#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{ double Sum, term, x, eps;
    int n;
    Sum=0;
    n=0;
    eps=1e-5;
    cout << " enter x " << endl;
    cin >> x;
    
    if ((x>0) and (x<1))
    { do
        { term=(pow((-1), n))*((pow(x, 2*n))+1)/((pow(2, n))+1);
            Sum=Sum+term;
            n=n+1; } while (abs(term)>=eps);
        cout << " Sum= " << Sum << endl; }
    
    else
        cout << "некоректне х" << endl;
    return 0;
}
