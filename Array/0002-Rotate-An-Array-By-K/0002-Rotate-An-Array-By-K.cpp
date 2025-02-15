vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    k = k%arr.size();
    int i = 0, j = arr.size()-1;
    while(i<j){
       int tmp = arr[i];
       arr[i] = arr[j];
       arr[j] = tmp;
       i++, j--;
    }
    i = 0, j = arr.size() - k - 1;
    while(i<j){
       int tmp = arr[i];
       arr[i] = arr[j];
       arr[j] = tmp;
       i++, j--;
    }
    i = arr.size() - k, j = arr.size()-1;
    while(i<j){
       int tmp = arr[i];
       arr[i] = arr[j];
       arr[j] = tmp;
       i++, j--;
    }
   return arr;
}