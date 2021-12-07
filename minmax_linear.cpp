#include<iostream>
using namespace std;

struct Pair
{
    /* data */
    int min;
    int max;
};

struct Pair getminmax(int n,int arr[])
{
    struct Pair minmax;
    int i;

    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
    }
    if(arr[0]<arr[1])
    {
        minmax.min=arr[0];
        minmax.max=arr[1];
    }
    else
    {
        minmax.min=arr[1];
        minmax.max=arr[0];
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min=arr[i];
        }

    }
    return minmax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    struct Pair minmax = getminmax(n,arr);
    cout<<"min="<<minmax.min;
    cout<<"max="<<minmax.max;
    return 0;
    
}

