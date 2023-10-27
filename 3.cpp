#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    setlocale(0, "");
    const int A = 10;
    int mas[A];
    cout << "Введите элементы массива: \n";
    for (int i = 0; i != 10; i++)
    {
        cin >> mas[i];
    }
    for (int i = 0; i != 10; i++)
    {

        x += mas[i];
    }
    
    cout << x;
}