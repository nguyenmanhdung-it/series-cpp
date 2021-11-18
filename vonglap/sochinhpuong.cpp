#include <iostream>
using namespace std;
int main()
{
    int i, N;
    bool kt = true;
    cout << "nhap so tu nhien N: ";
    cout<<"N= ";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        if (i*i == N)
        {
            kt = false;
            break;
        }
    }
    if (kt)
       cout << N << " khong la so chinh phuong \n";
    else
       cout << N << "  la so chinh phuong \n";
    return 0;
}