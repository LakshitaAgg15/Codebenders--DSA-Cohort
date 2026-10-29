// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>



// int main(){
//     int arr[]={1,2,3,4,5};
//     // int m=1;

//     // int n = (m+1, m-2);

//     // cout<<n;
//     int pos=2;
//     int n= 5;
    
//     for (int i = n; i > pos; i--) {
//     arr[i] = arr[i - 1];
//     }
//     arr[pos] = 10;
//     n++;

//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }

// }



#include <iostream>
using namespace std;
#include <vector>
// #include <algorithm>

// void incby2(vector<int>&arry, int sz){

//     for(int i=0;i<sz;i++){
//         arry[i]+=2;
//     }

//     for (int i=0; i<5; i++) {
//         cout << arry[i];
//     }
// }

int LinearSearch(vector<int>v, int target){

    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            return i;
        }
    }

    return -1;


}

int binarySearch(vector<int>v, int target ){

    int st=0, end= v.size()-1;

    while(st<=end){
        int mid= st+(end-st)/2;

        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }

    return -1;



}

void bubbleSort(vector<int>&arr){
    int n=arr.size();

    for(int i=0;i<n-1;i++){ //O(n)
        for(int j=0;j<n-1-i;j++){  //O(n)
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(vector<int>&arr){
    int n=arr.size();

    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }

        swap(arr[minIdx], arr[i]);
    }
}

// O(1), O(logn), O(n), O(nlogn), O(n^2)

void insertionSort(vector<int>&v){
    int n=v.size();

    for(int i=1;i<n;i++){
        int curr=v[i];
        int j=i-1;

        while(j>=0 && v[j]>curr){
            v[j+1]=v[j];
            j--;
        }

        v[j+1]=curr;
    }
}

int main() {
    
    vector<int> arry = {10, 30, 22,14, 11,26,4,5};

    // sort(arry.begin(),arry.end());

    // insertionSort(arry);

    // for(int i=0;i<arry.size();i++){
    //     cout<<arry[i]<<endl;
    // }


    // cout<<binarySearch(arry, 30);



    return 0;
}