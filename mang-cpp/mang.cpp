#include <iostream>
using namespace std;
int main()
{
    int M, N, i, j, a[10][10];
    cout << " nhap ma tran M hang N cot \n";
    cout << "M= ";
    cin >> M;
    cout << "N= ";
    cin >> N;
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
        {
            cout << " nhap vao phan tu hang " << i << " cot " << j << "\t";
            cin >> a[i][j];
        }
    cout << "ma tran thu duoc la: \n";
    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)

            cout << a[i][j] << "  ";
        cout << endl;
    }
    int max = a[1][1];
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    cout << "phan tu max trong ma tran = " << max << endl;
    int min = a[1][1];
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
    cout << "phan tu min trong ma tran = " << min << endl;
    return 0;
}
