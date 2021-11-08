#include <iostream>
#include <math.h >
using namespace std;
int main()
{
    float a, b, c, p, S, C;
    cout << " nhap vao so thuc a: ";
    cin >> a;
    cout << "nhap vao so thuc b: ";
    cin >> b;
    cout << "nhap vao so thuc c: ";
    cin >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == b * b + a * a)
            cout << "la tam giac vuong ";
        else if (a == b == c)
            cout << "la tam giac deu";
        else if (a == b || a == c || c == b)
            cout << "la tam giac can";
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            cout << "la tam giac tu";
        else
            cout << "la tam giac nhon";
    }
    else
       {
           cout << " a,b,c  khong la ba canh tam giac";
           return 0;
       }
    C = a + b + c;
    cout << "\n"
         << "chu vi tam giac la: " << C;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "\n"
         << "dien tich tam giac la " << S;
    return 0;

}