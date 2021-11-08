// nguyen manh dung 66it5
#include <iostream>
using namespace std;
int main()
{
    int i, M;
    bool kt = true;
    cout << "nhap M= ";
    cin >> M;
    if (M < 2)
    {
        cout << M << " khong la so nguyen to \n";
        exit(1);
    }
    for (i = 2; i < M; i++)

    {
        if (M % i == 0)
        {
            kt = false;
            break;
        }
    }
    if (kt)
       cout << M << " la so nguyen to \n";
    else
       cout << M << " khong la so nguyen to \n";
    return 0;
}