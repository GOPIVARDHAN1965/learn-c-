// patterns

#include<iostream>

using namespace std;

// ****
// ****
// ****
// ****
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// *
// **
// ***
// ****
// int main(){
//     int n; 
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=0; j<i;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// 1
// 12
// 123
// 1234
// int main(){
//     int n; 
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 1
// 22
// 333
// 4444
// 55555
// int main(){
//     int n; 
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=0; j<i;j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }



// ****
// ***
// **
// *
// int main(){
//     int n; 
//     cin >> n;
//     for(int i=n; i>0; i--)
//     {
//         for(int j=0; j<i;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// 12345
// 1234
// 123
// 12
// 1
// int main(){
//     int n; 
//     cin >> n;
//     for(int i=n; i>0; i--)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

//     *    
//    ***
//   *****
//  *******
// *********
// breaking down the problem is one important task of patterns.
// if we can see --> space , star, space is in every row
// so there are n-i-1 * spaces, 2*i+1 stars and n-i-1 * spaces in every row
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            cout << " "; 
        }
        for(int j=0; j<2*i+1;j++)
        {
            cout << "*"; 
        }
        for(int j=0; j<n-i-1;j++)
        {
            cout << " "; 
        }
        cout << endl;
    }
    

}