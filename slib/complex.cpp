#include "complex.h"
#include <iostream>
#include <string>
using namespace std;
complex complex::operator+(const complex& m)
{
    complex temp;
    temp.real = real + m.real;
    temp.imagin = imagin + m.imagin;
    return temp;
}
complex complex::operator-(const complex& m)
{
    complex temp;
    temp.real = real - m.real;
    temp.imagin = imagin - m.imagin;
    return temp;
}
complex complex::operator*(const complex& m)
{
    complex temp;
    temp.real = (real * m.real - imagin * m.imagin);
    temp.imagin = (real * m.imagin + m.real * imagin);
    return temp;
}
complex complex::operator/(const complex& m)
{
    complex temp;
    temp.real = (real * m.real + imagin * m.imagin) / (m.real * m.real + m.imagin * m.imagin);
    temp.imagin = (m.real * imagin - real * m.imagin) / (m.real * m.real + m.imagin * m.imagin);
    if (m.real * m.real + m.imagin * m.imagin == 0)
        cerr << "Error: can't divide by 0" << endl;
    return temp;
}
void complex::init(double r, double i)
{
    real = r;
    imagin = i;
}
void complex::read()
{
    double real, imagin;
    cout << "Enter real part" << endl;
    cin >> real;
    cout << "Enter imaginary part" << endl;
    cin >> imagin;
    init(real, imagin);
}
void complex::display()
{
    cout << "(" << real << "; " << imagin << ")" << endl;
}
bool complex::equ(complex m)
{
    return (real == m.real) && (imagin == m.imagin);
}
complex complex::conj()
{
    complex temp;
    temp.real = real;
    temp.imagin = -imagin;
    return temp;
}
string complex::tostr()
{
    string temp;
    temp = { "(" + to_string(real) + ", " + to_string(imagin) + ")" };
    return temp;
}
