#include<iostream>  // tinh n!
using namespace std;
int main()
{
    int i,n,p;
    cout<<" nhap n= ";
    cin>>n;
    p=1;
    for(int i=2; i<=n ; ++i)
    {
        p*=i ;  
    }
    cout<<"p="<<p;
    return 0;

}