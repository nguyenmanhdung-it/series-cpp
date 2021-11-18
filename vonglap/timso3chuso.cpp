#include <iostream> // Nguyễn Mạnh Dũng 66IT5

using namespace std; //in ra các số chia hết cho 3

int main()
{
    int i, j, k, So;
    cout << "cac so co ba chu so chia het cho 3 la: \n";
    for (i = 1; i <= 9; i++)
        for (j = 0; j <= 9; j++)
            for (k = 0; k <= 9; k++)
            {
                if ((i + j + k) % 3 == 0)
                {
                    So = 100 * i + 10 * j + k;
                    cout << So <<"  ";
                }
            }

    return 0;
}

// int main()
// {
//     int i, end;
//     end = 999;
//     cout << "cac so co ba chu so chia het cho 3 la:\n";
//     for (i = 100; i <= end; i++)
//     {
//         if (i % 3 == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;

