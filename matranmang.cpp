#include <iostream>
using namespace std;
int main()
{
    int i, j, N, M, a[10][10];
    cout << "nhap hang ,cot \n";
    cout << "M= ";
    cin >> M;
    cout << "N= ";
    cin >> N;
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            cout << "nhap phan tu "
                 << " hang " << i << " cot " << j << endl;
            cin >> a[i][j];
        }
    cout << "ma tran vua nhap \n";
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)

            cout << a[i][j] << "  ";
        cout << endl;
    }
    return 0;
}