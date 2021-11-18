#include <iostream>
using namespace std;
int main()
{
    int i, j, N, M, a[10][10];
    cout << "nhap ma tran M hang N cot \n";
    cout << "M= ";
    cin >> M;
    cout << "N= ";
    cin >> N;
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
        {
            cout << "nhap phan tu"
                 << " hang " << i << " cot " << j<<"\t" ;
            cin >> a[i][j];
        }
    cout << "ma tran vua nhap \n";
    for (i = 1; i <= M; i++)
    
     {for (j = 1; j <= N; j++)

            cout << a[i][j] << "  " ;
        cout << endl;
    }
    return 0;
}