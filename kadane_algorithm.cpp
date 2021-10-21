#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int max_1 = 0;      // stores the maximum sum subarray found so far.
 
    int max_2 = 0;      // stores the maximum sum of subarray ending at the current position.
 
    for (int i = 0; i < n; i++)     // traverse the given array.
    {
        max_2 = max_2 + a[i];
 
        max_2 = max(max_2, 0);
        
        max_1 = max(max_1, max_2);
    }
 
    return max_1;
}

int main()
{
    int n;
    cout << "Enter the size: " << endl;
    cin>>n;
    
    int a[n];       //  store input from user to array.
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int max_sum = kadane(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
