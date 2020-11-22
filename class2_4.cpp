#include <bits/stdc++.h>
using namespace std;
int findContent(int arr[], int n)
{
    int content = arr[0];
    for (int i = 1; i < n; i++)
    {
        content = __gcd(content, arr[i]);
    }

    return content;
}
int main()
{
    int n;
    cout<<"Enter the limit : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout << findContent(arr, n);
    return 0;
}