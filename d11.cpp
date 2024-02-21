#include<bits/stdc++.h>

using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    vector<int> v;
    while(i<n && j<m){
        if (!v.empty() && v.back()==a[i])i++;
        if(!v.empty() && v.back()==b[j]) j++;
        else if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        
        else if(a[i]==b[j]){
            v.push_back(a[i]);
            i++;
            j++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        v.push_back(a[i]);
        i++;
    }
    while(j<m){
        v.push_back(b[j]);
        j++;
    }
    return v;
}



int main(){
    vector<int> a;
    vector<int> b;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    vector<int> v;
    v=sortedArray(a,b);
    for(auto it:v){
        cout << it << " ";
    }
}





//rotate array
// int main(){
//     vector<int> nums;
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         int temp;
//         cin >> temp;
//         nums.push_back(temp);
//     }
//     int k;
//     cin >> k;
//     k=k%nums.size();
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k, nums.end());
//     for(auto it: nums){
//         cout << (it) << " ";
//     }
// }