#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count_min(vector<int> arr)
{
    int n = arr.size(),ans=0;
    vector<bool> visited(n,false);
    pair<int,int> ap[n];

    for(int i=0;i<n;i++)
    {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap,ap+n);
    for(int i=0;i<n;i++)
    {
        int op = ap[i].second;
        if(visited[i]==true or op == i)
        {
            continue;
        }
        int node=i,cycle=0;
        while(!visited[node])
        {
            visited[i]=true;
            int next = ap[node].second;
            node = next;
            cycle+=1;
        }
        ans += (cycle - 1); 
    }
    return ans;
}
int main()
{
    vector<int> arr = {2,4,5,1,3};
    cout<<count_min(arr)<<endl;
    return 0;
}