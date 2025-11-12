#include<iostream>
using namespace std;
// Polymorphism:
// Polymorphism means "many forms",
//              and it occurs when we have many classes that are related to each other by inheritance.
// Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class.
//            Polymorphism uses those methods to perform different tasks.
//            This allows us to perform a single action in different ways.

// NOTE: Polymorphism means inheritance with changes in objects of the parent class.
// Why And When To Use "Inheritance" and "Polymorphism"?
//          It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
class animals{
    public:
    void sound(){
        cout<<"animals have deffrend sound....\n";
    }
    void lovly(){
        cout<<"evryone of animal is lovly....\n";
    }
};
class dog : public animals{
    public:
    void sound(){
        cout<<"dog's sound is HOP...HOP...\n";
    }
};
class cat : public animals{
    public:
    void sound(){
        cout<<"cat's sound is MEWW...MEWW...\n";
    }
};


int main(){
    cout<<"*********************************\n";
    cout<<"this page we learn (polymorphism)\n";
    cout<<"*********************************\n";
    // main class(father):
    animals animal;
    animal.sound();
    animal.lovly();
    // polymorphism_1:
    dog dog;
    dog.sound();
    dog.lovly();
    // polymorphism_2:
    cat cat;
    cat.sound();
    cat.lovly();
    cout<<"--------------------------------\n";


    return 0;
}