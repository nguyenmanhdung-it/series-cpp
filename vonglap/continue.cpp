#include <iostream>
using namespace std;
int main()
{
    int i, N;
    cout << " nhap  N = ";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        {
            if (i % 2 == 0)
                continue;
        }
        cout << i << "  ";
    }
    return 0;
}