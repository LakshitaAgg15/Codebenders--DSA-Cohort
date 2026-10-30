#include <iostream>
#include <string>
using namespace std;

// Inheritance Example
// 1. BASE CLASS
class Phone {
public:
    string brand;
    int RAM;
    int ROM;
    int screenSize; 
};


class IPhone: virtual public Phone {
public:
    bool hasFaceID;

    void SetVal(int rom, int ram){

        brand="Apple";
        ROM=rom;
        RAM=ram;
    }

};

// class Pixel: public Phone {
// public:
//     bool GoogleAI;
// };

class IPhone18 : virtual public Phone, public IPhone {
public:
    string aiChip;
};

int main() {
    IPhone18 myPhone;

    myPhone.screenSize = 6; 

    cout << "Screen size set successfully!" << endl;
    return 0;
}
// Compile time polymorphism
class Maths{
    public:

    int add(int a, int b) {
    return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }


};

// Runtime polymorphism
class Animal {
public:
    void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks";
    }
};

// int main() {
//     Animal* a;
//     Dog d;
//     d.sound();
//     a = &d;

//     a->sound();
// }


// int main(){
 

// }

// Encapsulation
class BankAccount {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) {
            return false;
        }

        balance -= amount;
        return true;
    }

    double getBalance() {
        return balance;
    }
};

// int main(){
//     BankAccount b1;
//     b1.deposit(500);
//     cout<<b1.getBalance()<<endl;
//     b1.deposit(500);
//     cout<<b1.getBalance()<<endl;




// }