#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    int i = 0;
    for(; i< n; i++ )
    {
        if(arr[i] <= 0 || arr[i] > n) continue;
        if(arr[i] != i+1){
            swap(arr[i], arr[arr[i]-1]);
            i--;
        }
    }
    for(int j=0; j<n ;j++){
        if(arr[j] != j+1 ) return j+1;
    }
    return n+1;
}