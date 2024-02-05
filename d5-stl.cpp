#include<bits/stdc++.h>

using namespace std;

void explainPair(){
    pair<int, int> p = {2,5};
    cout << p.second << " " << p.first;
    cout << endl;
    pair<int, pair<int,int>> q = {2, {4,6}};
    cout << q.second.second << " " << q.second.first << " " << q.first; 
    cout << endl;
    pair <int, int> a[] = {{2,3},{5,6}};
    cout << a[0].second;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //faster than push_back()
    v.push_back(3);
    cout << v[1] << endl;

    vector<int> m = {1,2,3,4,5,6};
    cout << m.size()<<endl;
    //access elements in vector
    vector<int> :: iterator it = m.begin();
    for(int i=0; i<m.size(); i++)
    {
        cout << *(it) << " ";
        it++;
    }
    cout <<endl;
    for(vector<int>::iterator i=m.begin(); i!=m.end();i++){
        cout << *(i) << " ";
    }
    cout << endl; 
    for(auto it = m.begin(); it!=m.end();it++ )
    {
        cout << *(it) << " ";
    }
    cout << endl; 
    for(auto it: m )
    {
        cout << (it) << " ";
    }
    cout << endl; 
    m.erase(m.begin()+1);
    for(auto it: m )
    {
        cout << (it) << " ";
    }
    cout << endl;
    m.erase(m.begin()+1, m.begin()+3);
    for(auto it: m )
    {
        cout << (it) << " ";
    } 
}

void explainList(){

}


int main(){
    // explainPair();
    // explainVector();
    explainList();
    return 0;
}