#include<iostream>
using namespace std;

bool sorted_or_not(int n, int arr[])
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[n-1]<arr[n-2])
    {
        return false;
    }

    return sorted_or_not(n-1,arr);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(sorted_or_not(n,arr))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}