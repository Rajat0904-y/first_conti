#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
vector<vector<int> > triplet(vector<int> arr, int sum )
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int> > result;
    for(int i=0;i<n-3;i++)
    {
        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            int current_sum=arr[i];
            current_sum += arr[j];
            current_sum += arr[k];

            if(current_sum==sum)
            {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(current_sum > sum)
            {
                k--;
            }
            else{j++;}
        }
    }
    return result;
}

int main()
{  
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s;
    cin>>s;
    auto result = triplet(arr,s);

    for(auto v: result)
    {
        for(auto no: v)
        {
            cout<<no<<",";
        }
        cout<<endl;
    }
    return 0;
}