#include <iostream>
using namespace std;

float r;
float phi = 3.14159;

void input()
{
    cout << "Isikan jari jari : ";
    cin >> r;
}
float luas(float a) 
{
    return phi * a * a;
}

void output() 
{
    cout << "Luasnya adalah : " << luas(r);
}