// #include <iostream>
// using namespace std;
// #include <vector>

// // int removeDuplicates(vector<int>& a) {
// //     if (a.empty()) return 0;

// //     int slow = 0; // last position containing a unique value
// //     for (int fast = 1; fast < a.size(); fast++) {
// //         if (a[fast] != a[slow]) {
// //             ++slow;
// //             a[slow] = a[fast];
// //         }
// //     }
// //     return slow +1;
// // }


// int DiagSum(vector<vector<int>> vec){
// // n x m
//     int sum=0;
//     int n= vec.size();
//     int m= vec[0].size();

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(j=n-i-1){
//                 sum+=vec[i][j];
//             }
//         }
//     }

//     return sum;
    
// }

// int main(){

//     // char arr1[] = "HELL";
//     // // {'H', 'E', 'L', 'L', 'o', '\0'}
//     // char arr[5] = {'H', 'E', 'L', 'L', 'O'};

//     // for(int i=0; arr1[i]!='\0'; i++){
//     //     cout<<arr1[i]<<" ";
//     // }

//     string s1="good";

//     for( char c: s1){
//         cout<<c<<" ";
//     }





// }


// // 0,0  0,1  0,2   0,3  0,4
// // 1    2     3   4    5
// // 1,0  1,1   1,2  1,3  1,4
// // 6      7   8     9    10

// // i,n-i-1

// // 1 2  34== 10
// // 5 6 7 8=== 
// // 9 10 11 12


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello Geeks";

    // Extract "Hello"
    string sub1 = str.substr(0, 5);   
    cout << "Substring 1: " << sub1 << endl;

    // Extract "Geeks"
    string sub2 = str.substr(6, 2);  
    cout << "Substring 2: " << sub2 << endl;

    return 0;
}