#include <iostream>// nguyễn mạnh dũng 66it5
using namespace std;
int main()
{
    int i, n, s;
    cout << "nhap n = ";
    cin >> n;
    s = 0;
    for (i = 1; i <= n; ++i)
    {
        s = s + i;
    }
    cout << "tong "<< n <<" so tu nhien dau tien = " << s;
    return 0;
}