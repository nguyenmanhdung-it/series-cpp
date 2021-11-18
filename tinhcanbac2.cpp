#include <iostream> // nguyễn mạnh dũng 66it5
using namespace std;
int main()
{
    double x, Yo, eps, Y1=2, E;
    cout << "nhap x,Yo,eps \n";
    cout << "x= ";
    cin >> x;
    cout << "Yo= ";
    cin >> Yo;
    cout << "eps= ";
    cin >> eps;
    do
    {   
        Yo=Y1;
        Y1 = (Yo + x / Yo)/2;
        E = abs(Y1 - Yo);
    } while (E <= eps);
    cout << "can bac 2 cua x = " << Y1;
    return 0;
}