#include <iostream>
#include <cmath>
using namespace std;

float cub_rt(float x);

float equation(float a, float b);

int main()
{
  float a, b, Y;
  cout << "a = "; //введення а
  cin >> a;
  cout << "b = "; //введення b
  cin >> b;

  if (a > 0 && b > 0) //перевірка чисел на належність до ОДЗ
  {
    Y = equation(a, b); //обчислення Y за формулою
    cout << "Y = " << Y << endl;
  }

  else
    cout << "Invalid input!" << endl;
}

float cub_rt(float x) //підпрограма, що обчислює кубічний корінь числа
{
  float z = x;
  for (int n = 0; n < x; n++)
  {
    z = (1/3.0) * (x/pow(z, 2) + (2) * z); //задана формула кубічного кореня з числа
  }
  return z;
}

float equation(float a, float b) //підпрограма, що підставляє значення а i b до заданої формули для Y
{
  return cub_rt(cub_rt(a)) + sqrt(cub_rt(b)) + cub_rt((a + b));
}
