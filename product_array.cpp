#include <bits/stdc++.h>
#include<vector>
using namespace std;
  

void productArray(int arr[], int n)
{

    if (n == 1) {
        cout << 0;
        return;
    }
    /* Allocate memory for temporary 
arrays left[] and right[] */
    int* left = new int[sizeof(int) * n];
    int* right = new int[sizeof(int) * n];
  
    int* prod = new int[sizeof(int) * n];
  
    int i, j;
  
    vector<int> le(n);
    le[0]=1;
    left[0] = 1;
  

    right[n - 1] = 1;

    for (i = 1; i < n; i++)
        left[i] = arr[i - 1] * left[i - 1];
  
    for (j = n - 2; j >= 0; j--)
        right[j] = arr[j + 1] * right[j + 1];

    for (i = 0; i < n; i++)
        prod[i] = left[i] * right[i];
  
    for (i = 0; i < n; i++)
        cout << prod[i] << " ";
  
    return;
}
int main()
{
    int arr[] = { 10, 3, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The product array is: \n";
    cout<<n<<endl;
    productArray(arr, n);
}
  