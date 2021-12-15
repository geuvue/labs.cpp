#include <iostream>
using namespace std;

void repl_array(int t, int array[]);
void arr_output(int t, int array[]);

int main()
{
    bool isProgression = true;
    int d, t;
    cout << "Enter the number of sequence elements: ";
    cin >> t;
    int array1[t];
    for (int i = 0; i < t; i++)
    {
        cout << "el #" << i + 1 << " = ";
        cin >> array1[i];
    }
    cout << endl;
    d = array1[1] - array1[0];
    for (int i = 0; i < t - 1; i++)
    {
        if (d != array1[i + 1] - array1[i])
        {
            isProgression = false;
            break;
        }
    }
    if (isProgression)
        cout << "Difference of the arithmetic progression is " << d;
    else
    {
        repl_array(t, array1);
        arr_output(t, array1);
    }
}

void repl_array(int t, int array[])
{
    int min = array[0];
    for (int i = 0; i < t; i++)
        if (min > array[i])
            min = array[i];
    for (int i = 0; i < t; i++)
        if (array[i] % 2 == 0)
            array[i] = min;
}

void arr_output(int t, int array[])
{
    cout << "Changed array:" << endl;
    cout << "[ ";
    for (int i = 0; i < t; i++)
        cout << array[i] << " ";
    cout << "]" << endl;
}
