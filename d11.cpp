#include<bits/stdc++.h>

using namespace std;

//rotate array
int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int k;
    cin >> k;
    k=k%nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    for(auto it: nums){
        cout << (it) << " ";
    }
}