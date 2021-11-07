#include <iostream> // giai phuong trinh bac hai
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d, x, x1, x2;
    cout << "nhap a, b, c :\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 / a;
        x2 = (-b - sqrt(d)) / 2 / a;
        cout << " phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1="
             << x1<<"\n";
        cout << "x2="
             <<x2;
    }
    if (d == 0)
    {
        x = -b / 2 / a;
        cout << "phuong trinh co nghiem kep: \n";
        cout << "x1=x2="
             << x;
    }
    if (d < 0)
        cout << " phuong trinh vo nghiem: ";
    return 0;
}