#include<iostream>

using namespace std;

void p8(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i;j++)
        {
            cout << " "; 
        }
        for(int j=0; j<2*n - (2*i+1);j++)
        {
            cout << "*"; 
        }
        for(int j=0; j<i;j++)
        {
            cout << " "; 
        }
        cout << endl;
    }
}

void p10(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p11(){
    int n;
    cin >> n;
    int flip =1;
    for(int i=0; i<n; i++)
    {
        if (i%2==0) flip=1;
        else flip=0;
        for(int j=0; j<=i; j++)
        {
            cout << flip; 
            if(flip==0) flip=1;
            else flip = 0;
        }
        cout << endl;
    }
}


void p12(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout << j;
        }
        for(int j=0; j<2*(n-i); j++)
        {
            cout << " ";
        }
        for(int j=i; j>=1;j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p13(){
    int n;
    cin >> n;
    int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << x << " ";
            x+=1;
        }
        cout << endl;
    }
}

void p14(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(char c='A'; c<='A'+i; c++)
        {
            cout << c;
        }
        cout << endl;
    }
}

void p15(){
    int n;
    cin >> n;
    for(int i=n; i>0; i--)
    {
        for(char c='A'; c<'A'+i; c++)
        {
            cout << c;
        }
        cout << endl;
    }
}

void p16(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        char c='A'+i;
        for(int j=0; j<=i;j++ )
        {
            cout << c;
        }
        cout << endl;
    }
}

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