#include<bits/stdc++.h>

using namespace std;

void merg(int arr[], int low, int mid, int high){
    int narr[high-low+1];
    int left = low; 
    int right = mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right])
        {
            narr[i]=arr[left];
            left++;
        }
        else{
            narr[i]=arr[right];
            right++;
        }
    i++;
    }
    while(left<=mid){
        narr[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        narr[i]=arr[right];
        right++;
        i++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=narr[i-low];
    }
}

void merge_sort(int arr[],int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr,mid+1, high);
    merg(arr,low, mid, high);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int low=0;
    int high =n-1;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr,low, high);
    cout << endl;
    cout << "After Sort" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}