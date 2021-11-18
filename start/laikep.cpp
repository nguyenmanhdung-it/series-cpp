#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double T, S, P, n; // n la so nam gui
    cout << "nhap T";
    cin >> T;
    cout << "nhap S: ";
    cin >> S;
    cout << "nhap P: ";
    cin >> P;
    n = (log(T / S)) / (log(1 + P / 100));
    cout << "\n"
         << "so nam gui la:" << n;
    return 0;
}