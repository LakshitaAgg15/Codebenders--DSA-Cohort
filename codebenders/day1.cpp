#include <iostream>
using namespace std;
#include <algorithm>

int addNums(int a, int b){
    cout<<"Hello";
    int res=a+b;
    return res;
}


void canVote(int age){

    if(age>=18){
        cout<<"can Vote";
    }
    else{
        cout<<"cannot vote";
    }
}

int main(){

    // int num;
    // cin>>num;
    // int ans= addNums(5,10);
    // cout<<ans;

    // canVote(10);
    
    // for(int i=0;i<num;i++){
    //     if(i>10){
    //         break;
    //     }
    //     else{
    //         cout<<i<<endl;
    //     }
    // }
    string name="Alice";
    int num=100;

    cout<<name.length()<<endl;
    // cout<<num.size()<<endl;
    
 

    cout<<"Bye";

    return 10;
}
