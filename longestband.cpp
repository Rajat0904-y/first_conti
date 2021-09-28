#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largest(vector<int> arr);

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<largest(arr)<<endl;
    return 0;
}

int largest(vector<int> arr)
{
    int n = arr.size();
    int large=1;
    unordered_set<int> s;

    for(int x: arr)
    {
        s.insert(x);
    }

    for(auto element : s)
    {
        
        int parent = element-1;
        if(s.find(parent)==s.end())
        {
            int next = element+1;
            int count=1;
            while(s.find(next)!=s.end())
            {
                next++;
                count++;
            }
            if(count>large)
            {
                large = count;
            }
        }
    }
    return large;
}