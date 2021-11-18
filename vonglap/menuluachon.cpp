#include <iostream>
using namespace std;
int main()
{
    int Selection = 1;
    while (true)
    {
        cout << "1_choose question 1 \n";
        cout << "2_choose question 2 \n";
        cout << "3_choose question 3 \n";
        cout << "4_choose question 4 \n";
        cout << "5_choose question 5 \n";
        cout << "6_choose question 6 \n\n";
        cout << "Please enter your selection \n";
        cin >> Selection;
        switch (Selection)
        {
        case 1:
            cout << "choose question  1\n";
            break;
        case 2:
            cout << "choose question  2\n";
            break;
        case 3:
            cout << "choose question  3\n";
            break;
        case 4:
            cout << "choose question  4\n";
            break;
        case 5:
            cout << "choose question  5\n";
            break;
        case 6:
            cout << "choose question  6\n";
            break;
        default:
            cout << " asked to choose one of six questions \n ";
        }
        cout << "End program. \n";
        cout << "Please choose more \n";
    }
    return 0;
}