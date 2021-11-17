#include <iostream>
using namespace std;
int main()
{
    int n, i, a[100], s = 0;
    cout << "nhap so phan tu day n = ";
    cin >> n;
        for (i = 0; i < n; i++)
    {
        cout << "nhap so " << i+1<<"\t";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        s += a[i];
    cout << "tong s= " << s<<endl;
    return 0;
}