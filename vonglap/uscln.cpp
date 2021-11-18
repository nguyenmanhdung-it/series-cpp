#include <iostream>
using namespace std;
int main()
{
    int M, N;
    cout << " nhap hai so M, N : \n";
    cout << "M=";
    cin >> M;
    cout << "N=";
    cin >> N;
    while (M != N)
    {
        if (M > N)
        {
            M = M - N;
        }
        else
            N = N - M;
    }
    cout << "uscln = " << M;
    return 0;
}