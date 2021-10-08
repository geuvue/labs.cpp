#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{   double x; // введення змінної х
double y;
cout << " enter x " << endl;
cin >> x;
if (x > 0)
 y = x*x; // обчислення у при х>0
else
 y = -x; // обчислення у прі х<=0

cout << " result equals = " << y<< endl;
return 0;
}
