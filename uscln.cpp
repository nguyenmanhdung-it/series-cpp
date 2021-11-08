#include<iostream>
using namespace std;
int main ()
{
     int M,N;
     cout<<" nhap M,N";
     cout<<"M="<<M;
     cin >> M;
     cout<<"N="<<N;
     cin>>N;
   
    while(M!=N)
    {
        if (M>N)
            M=M-N;
        else 
            N=N-M;
    }
    cout<<"uscln =";
    return 0;
}   