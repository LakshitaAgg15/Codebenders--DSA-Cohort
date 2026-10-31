#include <iostream>
using namespace std;
#include <vector>


int factorial(int n){
// Base case
    if(n==0 || n==1){
        return n;
    }


    // Recursive call
    return n* factorial(n-1);
    

}

int fib(int n){

    if(n==0 || n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}

int SumofArray(vector<int>&arr,int n){

    if(n==0){
        return arr[0];
    }

    return arr[n]+SumofArray(arr,n-1);

}


void printSubseq(vector<int>&arr, int idx, vector<int>&curr){

    if(idx==arr.size()){
        for(int x:curr){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }

    curr.push_back(arr[idx]);
    printSubseq(arr, idx+1, curr);

    curr.pop_back();
    printSubseq(arr, idx+1, curr);



}

int main(){

    // cout<< factorial(5);
    // cout<<fib(100);

    vector<int>v={1,2,4};
    vector<int>path;

    printSubseq(v, 0, path);

    // cout<<SumofArray(v,v.size());

    
}