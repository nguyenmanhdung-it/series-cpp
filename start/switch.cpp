#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int selection;
        cout << " (*) exercise selection:\n";
        cout << " 1_math problem printing numbers divisible by 3\n";
        cout << " 2_factorial math problem\n";
        cout << " 3_check primes\n";
        cout << " 4_point exchange problem\n";
        cout << " 5_sum of N natural numbers\n";
        cout << " 6_greatest common divisor\n\n";
        cout << " input selection:   ";
        cin >> selection;
        switch (selection)
        {
        case 1:
        {
            int i, j, k, So;
            cout << "A three-digit number that is divisible by 3: \n";
            for (i = 1; i <= 9; i++)
                for (j = 0; j <= 9; j++)
                    for (k = 0; k <= 9; k++)
                    {
                        if ((i + j + k) % 3 == 0)
                        {
                            So = 100 * i + 10 * j + k;
                            cout << So << "  ";
                        }
                    }
            cout << endl;
        }

        break;

        case 2:

        {
            int i, n, p;
            cout << " input n= ";
            cin >> n;
            p = 1;
            for (int i = 2; i <= n; ++i)
            {
                p *= i;
            }
            cout << "  p= " << p;
            cout << endl;
        }
        break;
        case 3:
        {
            int i, M;
            bool kt = true;
            cout << "input M= ";
            cin >> M;
            if (M < 2)
            {
                cout << M << " is not a prime number \n";
                exit(1);
            }
            for (i = 2; i < M; i++)
            {
                if (M % i == 0)
                {
                    kt = false;
                    break;
                }
            }
            if (kt)
                cout << M << "is a prime number \n";
            else
                cout << M << "is not a prime number \n";
            cout << endl;
        }
        break;
        case 4:
        {
            float DTB;
            cout << "input DTB ";
            cin >> DTB;
            if (DTB < 4)
                cout << "get score F";
            else if (DTB < 5)
                cout << "get score D";
            else if (DTB < 5.5)
                cout << "get score D+";
            else if (DTB < 6.5)
                cout << "get score C";
            else if (DTB < 7)
                cout << "get score C+";
            else if (DTB < 8)
                cout << "get score B";
            else if (DTB < 8.5)
                cout << "get score B+";
            else
                cout << "get score A";
            cout << endl;
        }
        break;
        case 5:
        {
            int S = 0, N, i;
            cout << "input a positive integer  N = ";
            cin >> N;
            for (i = 1; i <= N; i++)
            {
                S += i;
            }
            double TBC = double(S) / N;
            cout << "TBC " << N << " first positive integer  =  " << TBC;
            cout << endl;
        }
        break;
        case 6:
        {
            int M, N;
            cout << " input M, N : \n";
            cout << "M=";
            cin >> M;
            cout << "N=";
            cin >> N;
            while (M != N)
            {
                if (M > N)
                {
                    M = M - N;
                }
                else
                    N = N - M;
            }
            cout << "greatest common divisor = " << M;
            cout << endl;
        }
        break;
        default:
        cout<<"Incorrect selection, please choose again ";
        }
    }
    return 0;
}