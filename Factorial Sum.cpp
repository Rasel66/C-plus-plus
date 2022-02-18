#include<iostream>
using namespace std;
int main()
{
    int a, b, sum,i,j;
    int fact1,fact2;
    fact1= fact2=1;
    cin>>a>>b;
    while(a!=EOF && b!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            fact1= fact1*i;
        }
        for(j=1;j<=b;j++)
        {
            fact2=fact2*j;
        }
    }
    sum=fact1+fact2;
    cout<<sum<<endl;


}
