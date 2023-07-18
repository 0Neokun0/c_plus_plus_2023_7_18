// C++ program to demonstrate inheritance
#include <iostream>

using namespace std;

// Base Class
class Animal {
    public:
        void eat() {
            cout << "I can eat!" << endl;
        }
        void sleep() {
            cout << "I can sleep!" << endl;
        }
};

// Derived Class
class Dog : public Animal {
    public:
        void bark() {
            cout << "I can bark! Woof Woof!!" << endl;
        }
};
int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
}