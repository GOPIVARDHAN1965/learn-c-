#include<bits/stdc++.h>

using namespace std;

int c = 0;
//recursion basic
void recursion(){
    if(c==3)return ;
    cout << c << endl;
    c++;
    recursion();
}

// print a name n times using recursion
void r2(int n){
    if(n==0){return ;}
    cout << "Gopi" << " ";
    r2(n-1);
}

//print 1 to n using recursion
void r3(int n){
    if(n==0) return;
    r3(n-1);
    cout << n <<endl;
}

//print n to 1 using recursion
void r4(int n){
    if(n==0) return;
    cout << n <<endl;
    return r4(n-1);
}

//sum of first n numbers
int r5(int n,int s){
    if(n==0) return s;
    s+=n;
    return r5(n-1,s);
}

//factorial of first n numbers
int r6(int n,int f){
    if(n==1) return f;
    f*=n;
    return r6(n-1,f);
}

int main(){
    // recursion();
    int s=0;
    int f=1;
    // cout << r5(4,0);
    // r4(10);
    cout << r6(3,f);
    return 0;
}