#include<iostream>
using namespace std;
int main()
{
    float n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        int d=0;
        while(x>1)
        {
            x=x/2;
            d++;
        }
        cout<<d<<" dias"<<endl;
    }
}
