#include<bits/stdc++.h>

using namespace std;


void explainList(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout << l.size() << endl;
    for(auto it:l){
        cout << it << " ";
    }
    cout << endl;
    l.sort();
    for(auto it:l){
        cout << it << " ";
    }
    cout << endl;
}

void explainStack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.empty() << endl;
    cout << s.size();
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
}


void explainPQ(){
    priority_queue<int> pq ;
    pq.push(10);
    pq.push(4);
    pq.push(22);
    cout << pq.top() << endl; //returns the max elements from the heap.

    // to store minimum at top
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(10);
    p.push(4);
    p.push(22);
    cout << p.top() << endl;
}


void explainSet(){
    set<int> s = {5,3,1,1,3,5,7,2,1,9,10};
    for(auto it:s){
        cout << it << " ";
    } 
    cout << endl;
    cout << s.count(1) << endl;
    auto it = s.find(21);
    cout << *(it);
}

void mis(){
    int a[] = {1,4,4,4,4,9,9,11};
    int* ind = lower_bound(a,a+(sizeof(a)/sizeof(a[0])),4);
    int index = ind-a;
    cout << index << endl;

    int* in = upper_bound(a,a+(sizeof(a)/sizeof(a[0])),4);
    int upper_index = in-a;
    cout << upper_index << endl;
}


int main(){
    mis();
    return 0;
}