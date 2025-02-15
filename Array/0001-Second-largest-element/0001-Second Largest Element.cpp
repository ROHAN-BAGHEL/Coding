
#include <bits/stdc++.h> 

int findSecondLargest(int n, vector<int> &arr)
{
    int larg_2 = -1, larg = 0;
    for(int i=0; i < arr.size(); i++ ){
        if(arr[i] > arr[larg]){
            larg_2 = arr[larg];
            larg = i;
        }
        else if( arr[i] < arr[larg]){
            if(larg_2 == -1 || larg_2 < arr[i] ) larg_2 = arr[i];
        }
    }
    return larg_2;
    // Write your code here.
}


