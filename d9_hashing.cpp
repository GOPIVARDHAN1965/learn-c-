#include<bits/stdc++.h>

using namespace std;

//imp bro
void mapp(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map <int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

}

void most_freq(){
    int n;
    cin >> n;
    int arr[n];
    map <int, int> mpp;
    int max_c=0;
    int max;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
        if(mpp[arr[i]]>max_c){
            max_c=mpp[arr[i]]; 
            max=arr[i];
        }
    }
    cout << max << "-->" << max_c; 



}


int main(){
    most_freq();
    return 0;
}