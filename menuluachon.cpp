#include <iostream>
using namespace std;
int main()
{
    int luachon = 1;
    while (true)
    {
        cout << "1_chon cau hoi 1 \n";
        cout << "2_chon cau hoi 2 \n";
        cout << "3_chon cau hoi 3 \n";
        cout << "4_chon cau hoi 4 \n";
        cout << "5_chon cau hoi 5 \n";
        cout << "6_chon cau hoi 6 \n\n";
        cout << "moi ban nhap lua chon \n";
        cin >> luachon;
        switch (luachon)
        {
        case 1:
            cout << "chon cau hoi 1\n";
            break;
        case 2:
            cout << "chon cau hoi 2\n";
            break;
        case 3:
            cout << "chon cau hoi 3\n";
            break;
        case 4:
            cout << "chon cau hoi 4\n";
            break;
        case 5:
            cout << "chon cau hoi 5\n";
            break;
        case 6:
            cout << "chon cau hoi 6\n";
            break;
        }
        cout << "ket thuc chuong trinh \n";
        cout << "moi ban chon tiep\n";
    }
    return 0;
}