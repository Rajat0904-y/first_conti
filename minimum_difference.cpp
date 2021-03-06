#include <bits/stdc++.h>
using namespace std;
 
// function to calculate Small
// result between two arrays
pair<int,int> findSmallestDifference(int A[], int B[],int m, int n)
{
    // Sort both arrays using
    // sort function
    sort(A, A + m);
    sort(B, B + n);
 
    int a = 0, b = 0;
    int x,y;
    // Initialize result as max value
    int result = INT_MAX;
 
    // Scan Both Arrays upto
    // sizeof of the Arrays
    while (a < m && b < n)
    {
        if (abs(A[a] - B[b]) < result)
        {
            result = abs(A[a] - B[b]);
            x=A[a]; 
            y=B[b];
        }
            
 
        // Move Smaller Value
        if (A[a] < B[b])
        {
            a++;
        }
        else
        {
            b++;
        }
    }
 
    // return final sma result
    return {x,y};
}
 
// Driver Code
int main()
{
    // Input given array A
    int A[] = {1, 2, 11, 5};
    // Input given array B
    int B[] = {4, 12, 19, 23, 127, 235};
    // Calculate size of Both arrays
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
 
    // Call function to print
    // smallest result
    auto p=findSmallestDifference(A, B, m, n);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}