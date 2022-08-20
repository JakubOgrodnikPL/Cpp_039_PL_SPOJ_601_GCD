#include <iostream>
int n,a,b;
using namespace std;

int fgcd(int a, int b)
{
    int c;
    for(;b!=0;)
    {
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}

int main()
{
    cin>>n;
    while(n>0)
    {
        cin>>a>>b;
        cout<<fgcd(a,b)<<endl;
        n--;
    }
    return 0;
}
