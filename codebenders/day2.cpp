//boilerplate code / setup code



#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>



int main(){

    vector <int> arr={1,2, 3, 4,5};

    // 5,4,3,2,1
    // 4,5,3,2,1
    // 4,5,1,2,3


    // // right rotate
    // int pos=8;
    // pos=pos %arr.size();

    // reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.begin()+pos);
    // reverse(arr.begin()+pos, arr.end());

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    
    // Left rotate
    int pos=2;
    pos=pos %arr.size();

    reverse(arr.begin(), arr.begin()+pos);
    reverse(arr.begin()+pos, arr.end());
    reverse(arr.begin(), arr.end());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    // return 0;
}