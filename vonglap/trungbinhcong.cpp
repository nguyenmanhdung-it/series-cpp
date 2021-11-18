#include <iostream>
using namespace std;
int main()
{
    int S = 0, N, i;
    cout << "nhap so nguyen duong  N = ";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        S += i;
    }
    double TBC = double(S) / N;
    cout << "TBC " << N << " so nguyen duong dau tien  =  " << TBC;
    return 0;
}