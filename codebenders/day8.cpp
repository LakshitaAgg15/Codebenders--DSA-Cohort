#include <iostream>
using namespace std;
#include <vector>

void merge(vector<int>&v, int st, int mid, int end){
    vector<int> sorted;
    int left=st;
    int right=mid+1;

    while(left<=mid && right<=end){
        if(v[left]<v[right]){
            sorted.push_back(v[left]);
            left++;
        }
        else{
            sorted.push_back(v[right]);
            right++;
        }
    }

    while(left<=mid){
        sorted.push_back(v[left]);
        left++;
    }

    while(right<=end){
        sorted.push_back(v[right]);
        right++;
    }

    for(int i=0;i<sorted.size();i++){
        v[st+i]= sorted[i];
    }

}

int partition(vector<int>&arr, int st, int end){
    int pivot= arr[end];
    int i=st-1;

    for (int j=st;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }

    }

    swap(arr[i+1], arr[end]);

    return i+1;
}

void quickSort(vector<int>&v, int st, int end){
    if(st<end){
        int pivot= partition(v, st,end);
        quickSort(v, st, pivot-1);
        quickSort(v, pivot+1, end);
    }
}


void mergeSort(vector<int>&v, int st, int end){  //O(nlogn)

    if(st<end){
        int mid= st+(end-st)/2;
// O(logn)
        mergeSort(v, st, mid);
        mergeSort(v, mid+1, end);
// O(n)
        merge(v, st, mid, end);
    }


}


int main(){
    vector<int> v={2,3,1,6,4,8,11,9,23,7};

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    quickSort(v, 0, v.size()-1);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}