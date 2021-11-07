#include<iostream>  // tinh n!
using namespace std;
int main()
{
    int i,n,s;
    cout<<" nhap n= \t";
    cin>>n;
    s=1;
    for(int i=2; i<=n ; ++i)
    {
        s*=i ;  
    }
    cout<<"s="<<s;
    return 0;

}