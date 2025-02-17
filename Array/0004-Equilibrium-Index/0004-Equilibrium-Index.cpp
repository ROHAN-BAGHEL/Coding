#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    if(arr.size() == 1) return 0;

    int rsum =0, lsum = 0;
    for(int i:arr) rsum += i;
    for(int i = 0; i < arr.size(); i++){
        
        if(i != 0) lsum += arr[i-1];

        rsum -=  arr[i];

        if(lsum == rsum ) return i;


    }
    return -1;

}