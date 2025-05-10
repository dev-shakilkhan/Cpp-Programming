#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;

    // Concrete function
    void sleep() {
        cout << "This animal is sleeping." << endl;
    }

    // Virtual destructor (optional but good practice)
    virtual ~Animal() {}
};

// Derived class: Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    cout << "Dog:" << endl;
    dog.sound();
    dog.sleep();

    cout << "\nCat:" << endl;
    cat.sound();
    cat.sleep();

    return 0;
}
