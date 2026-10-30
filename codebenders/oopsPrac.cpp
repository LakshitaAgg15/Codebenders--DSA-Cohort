#include <iostream>
using namespace std;
#include <vector>


class Student{
    public:
    string name;
    int rollno;
    int age;
    vector<int>marks;

    void setmarks(int m1, int m2, int m3, int m4){
        marks.push_back(m1);
        marks.push_back(m2);
        marks.push_back(m3);
        marks.push_back(m4);
    }

    void getValues(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    
    }
};

class researchStudent: public Student{
    public:
    string researchDomain;
};


int main(){
    Student s1;
    researchStudent r1;
    Student s2;
    s1.name="Riya";
    s2.name="Priya";
    s1.rollno=101;
    s2.rollno=102;

    r1.name="Raj";
    r1.setmarks(40,66,77,88);
    r1.researchDomain="Computer vision";

    s1.setmarks(100,88,98,67);
    s2.setmarks(30,5,89,99);

    s1.getValues();
    s2.getValues();



}


