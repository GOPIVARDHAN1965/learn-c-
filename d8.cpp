#include<bits/stdc++.h>

using namespace std;

void reverse_arr(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse_arr(i+1,arr,n);
}

bool palindrome(int l, int r, string &s){
    if(l>=r) return true;
    if (s[l]==s[r]) return palindrome(l+1, r-1, s);
    else return false;
}

int main(){
    // int n;
    // cout << "enter arry size :";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // reverse_arr(0,arr, n);
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    string s;
    getline(cin, s);
    string res="";
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i])) res+=tolower(s[i]);
        }
    cout << res << endl;
    cout << palindrome(0,res.size()-1,res);
    return 0;
}