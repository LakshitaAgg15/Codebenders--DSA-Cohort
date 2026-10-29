#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
#include <unordered_set>

class Student{
    public:
    string name;
    int age;
    int rollno;

    Student(){
        cout<<"Hi, a new object is created"<<endl;
    }

    Student(string n, int a, int r){
        name=n;
        age=a;
        rollno=r;

    }



    void getDetails(){
        cout<<"Name: "<<name;
        cout<<"Age: "<<age;
        cout<<"Rollno: "<<rollno;
    }

    ~Student(){
        cout<<"Object destroyed"<<endl;
    }

    ~Student(){
        cout<<"Object deleted"<<endl;
    }
};


int main(){

    Student s1;
    Student s2;
    Student s3;
    Student s4;
    
        Student s5("Alice", 20, 101);
        s1.getDetails();
        s5.getDetails();
    
    

    // // s1.setValues("Ali", , 101);
    // s1.age=10;
    // s1.getDetails();
    // // Student s2;
    
    // // s2.setValues("Mac", 21, 102);

}



