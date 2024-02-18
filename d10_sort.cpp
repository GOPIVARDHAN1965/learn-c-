#include<bits/stdc++.h>

using namespace std; 

void selection_sort(int arr[], int n){
    cout << "Before Sort" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    for(int i=0; i<=n-2; i++){
        for(int j=i; j<=n-1; j++ ){
            if(arr[i]>arr[j]){swap(arr[i],arr[j]);}
        }
    }
}

void bubble_sort(int arr[], int n){
    cout << "Before Sort" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    for(int i=0; i<n; i++){
        int k=1;
        for(int j=0; j<n-i; j++ ){ //cutting the last sorted elements
            if(arr[j]>arr[k]){
                swap(arr[j],arr[k]);
            }
            if(k<n-i-1) k++; // we know we are already pushing the max element to the last
        }                    //so we dont have to check the n-i last elements in every iterations
    }

}

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}





int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //selection_sort(arr,n);
    // bubble_sort(arr,n);
    insertion_sort(arr,n);
    cout << endl;
    cout << "After Sort" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}