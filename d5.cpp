#include<iostream>

using namespace std;

void p17(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        char c = 'A';
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        for(int j=0; j<2*i+1;j++)
        {
            cout << c;
            if(j<i){c+=1;}
            else {c-=1;}
            
        }
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    p17();
    return 0;
}