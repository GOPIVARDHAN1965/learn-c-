#include<iostream>

using namespace std;

// pass by value
// void doSomething(int x){
//     cout << "x from the function " << endl;
//     cout << x << endl;
//     x+=5;
//     cout << x << endl;
//     x+=5;
//     cout << x << endl;
// }

// pass by reference
void doSomething(int &x){
    cout << "x from the function " << endl;
    cout << x << endl;
    x+=5;
    cout << x << endl;
    x+=5;
    cout << x << endl;
}

//to pass an array we generally have to pass by reference.
// we dont have to include & before passing an array. they are by default passed by reference. 
int main(){
    int num = 10;
    doSomething(num);
    cout << "x from main statement after calling fucntion = " << num << endl;
    return 0;

}