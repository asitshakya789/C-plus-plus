#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    for(int i =1; i<=n;i++)
    {
        for(int j=n-1;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j =1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
}