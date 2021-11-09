#include <iostream>
using namespace std;
int main()
{
    float DTB;
    cout << "nhap diem DTB ";
    cin >> DTB;
    if (DTB < 4)
        cout << "dat diem F";
    else if (DTB < 5)
        cout << "dat diem D";
    else if (DTB < 5.5)
        cout << " dat diem D+";
    else if (DTB < 6.5)
        cout << "dat diem C";
    else if (DTB < 7)
        cout << "dat diem C+";
    else if (DTB < 8)
        cout << "dat diem B";
    else if (DTB < 8.5)
        cout << "dat diem B+";
    else
        cout << "dat diem A";
    return 0;
}