#include<iostream>
using namespace std;
int main ()
{
     int M,N;
     cout<<"M=";
     cin >> M;
     cout<<"N=";
     cin>>N;
   
    while(M!=N)
    {
        if (M>N)
            M=M-N;
        else 
            N=N-M;
    }
    return 0;
}   