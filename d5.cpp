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

void p18(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        char c='A'+n-i;
        for(int j=0; j<i; j++)
        {
            cout << c << " "; 
            c++;
        }
        cout << endl;
    }
}

void p19(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        for(int j=0; j<2*i; j++){
            cout << ' ';
        }
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        cout << endl;
    }
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<n-i+1; j++){
            cout << '*';
        }
        for(int j=0; j<2*(i-1); j++){
            cout << ' ';
        }
        for(int j=0; j<n-i+1; j++){
            cout << '*';
        }
        cout << endl;
    }
}


void p20(){
    int n;
    cin >> n;
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<n-i+1; j++){
            cout << '*';
        }
        for(int j=0; j<2*(i-1); j++){
            cout << ' ';
        }
        for(int j=0; j<n-i+1; j++){
            cout << '*';
        }
        cout << endl;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        for(int j=0; j<2*i; j++){
            cout << ' ';
        }
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        cout << endl;
    }
}

void p21(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ;j++ )
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {cout << '*' << " ";}
            else {cout << "  ";}
        }
         cout << endl;
    }
}

void p22(){
    int n; 
    cin >> n;
    int x;
    for(int i=0; i<n;i++)
    {
        x=n;
        for(int j=0; j<i; j++)
        {
            cout << x << " ";
            x-=1;
        }
        for(int j=0; j<(2*n-1)-(2*i); j++)
        {
            cout << n-i << " ";
        }
        for(int j=0; j<i; j++)
        {
            x+=1;
            cout << x << " ";
        }
        cout << endl;
    }
    for(int i=n-2; i>=0;i--)
    {
        x=n;
        for(int j=0; j<i; j++)
        {
            cout << x << " ";
            x-=1;
        }
        for(int j=0; j<(2*n-1)-(2*i); j++)
        {
            cout << n-i << " ";
        }
        for(int j=0; j<i; j++)
        {
            x+=1;
            cout << x << " ";
        }
        cout << endl;
    }
}



int main(){
    p22();
    return 0;
}