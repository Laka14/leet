class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int temp =-1;
        int curr =0;
        for(int i =n-1; i>=0; i--){
            curr = max(temp, arr[i]);
            arr[i] = temp;
            temp = curr;
        }
        return arr;
    }
};