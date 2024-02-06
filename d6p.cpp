#include<bits/stdc++.h>

using namespace std;

int countDigits(int n){
	// Write your code here.
	int a=0;
	int x=n;
	int r=x%10;
	while (x!=0)
	{
		if(r!=0){if(n%r==0){a+=1;};}
		x=x/10;
		r=x%10;
	}
	return a;
}

int main(){
    cout << countDigits(156);
    return 0;
}