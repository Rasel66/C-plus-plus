#include<iostream>
using namespace std;
int main()
{
    int n, i, a, b, q, r, c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            q=b;
            r=a;
        }
        else
        {
            q=a;
            r=b;
        }
        while(q%r!=0)
        {
            c=q%r;
            q=r;
            r=c;
        }
        cout<<r<<endl;
    }
}
