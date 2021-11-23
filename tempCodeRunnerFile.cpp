#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=1)
    {
        cout<<"odd";
    }

    else if(n>1)
    {
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"prime";
        }
        else
        {
            if(n%2==0)
            {
                cout<<"even but not prime";
            }
            else{
                cout<<"odd but not prime";
            }
        }
    }
    return 0;
}