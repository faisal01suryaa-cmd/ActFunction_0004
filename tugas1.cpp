#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "masukkan panjang :" ;
    cin >> panjang;
    cout << "masukkan lebar :" ;
    cin >> lebar;
}

int luasPersegi(int a, int b)
{
    return a * b;
}

int kelilingPersegi(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    cout << "luasnya : " << luasPersegi
    (panjang, lebar) << endl;
}
int main()
{
    input();
    output();
    cout << "keliling : " << kelilingPersegi
    (panjang, lebar);
}