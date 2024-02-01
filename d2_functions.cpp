#include<iostream>

using namespace std;

// void functions
// return functions
// parametaraised functions
// non parameter fucntions

void print(){
    cout << "Hey Gopi \n";
}

void print(string name){
    cout << "Hey " << name << "\n" ;  
}

int add(int x, int y){
    int c = x+y;
    return c;
}

// if a return functions does not return any value then the compiler throws a grabage value 
// for eg.
// int max(int x, int y){
//     if(x>y) return x;
// }
// in the above case we are not returning for the else case. so if a value is not satisfied by "if" case
// then the compiler throws a garbage value


int main(){
    print();
    print("Vardhan");
    cout << add(3,4) << "\n";
    return 0;
}

