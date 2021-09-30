#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool outoforder(vector<int> arr, int i)
{
    int x = arr[i];
    if(i==0)
    {
        return x>arr[1];
    }
    if(i==arr.size()-1)
    {
        return x<arr[i-1];
    }
    return x>arr[i] or x<arr[i];
}
pair<int , int > ss(vector<int> arr)
{
    int smallest = INT_MAX;
    int Largest = INT_MIN;
    for(int i =0;i<arr.size();i++)
    {
        int x = arr[i];
        if(outoforder(arr,i))
        {
            smallest = min(smallest,x);
            Largest = max(Largest,x);
        }
    }
    if(smallest==INT_MAX)
    {
        return {-1,-1};
    }
    

    int left = 0;
    while(smallest>=arr[left])
    {
        left++;
    }
    int right = arr.size()-1;
    while(Largest<=arr[right])
    {
        right--;
    }
    return {left,right};

    
}
int main()
{
    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    auto p = ss(arr);
    cout<<p.first<<" and "<<p.second<<endl;

    return 0;
}