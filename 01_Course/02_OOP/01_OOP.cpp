#include<iostream>
using namespace std;
// creat a class:
class car_1{
    // Access Specifiers:
    // public == members are accessible from outside the class
    // private == members cannot be accessed (or viewed) from outside the class
    // protected == members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    //              You will learn more about Inheritance later.
    // NOTE: By default, all members of a class are private if you don't specify an access specifier.

   
    private:
      int price;
    // The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
    //          To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
    //          If you want others to read or modify the value of a private member, you can provide public get and set methods.
    // Why Encapsulation?
    // (1) It is considered good practice to declare your class attributes as private (as often as you can).
    //            Encapsulation ensures better control of your data,
    //            because you (or others) can change one part of the code without affecting other parts
    // (2) Increased security of data

    public:
      string brand;
      string model;
      string color;
      int year;
    // Constructors:A constructor in C++ is a special method that is automatically called when an object of a class is created.
    //               Constructors can also take parameters (just like regular functions),
    //               which can be useful for setting initial values for attributes.
    //               To create a constructor, use the same name as the class

    // inside Constructors:
    car_1(){
        cout<<"hello_constructor_1\n";
    }
    car_1(string x, string y, string z, int w){
        brand = x;
        model = y;
        color = z;
        year = w;
    }
    // outside constructor:
    // car_1(string x_x, string y_y, string z_z, int w_w, string from);
    //------------------------------------------------------------------------
    // inside class method(behavior):
        void inside_method(){
            cout<<"hello cpp programer!!!\n";
       }
        void inside_method_2(string name = "amin", int age = 21){
            cout<<"you are "<<name<<" and have "<<age<<" years old.\n";
       }
    // outside class method(behavior):
        void outside_method();
        void outside_method_2(string name, int age);
    //--------------------------------------------------------------------------
     // Access Private Members: To access a private attribute, use public "get" and "set" methods.
     // setter:
     void set_price(int x){
        price = x;
     }
     // getter:
     int get_price(){
        return price;
     }
      
};
//============================================================================================================
//============================================================================================================
// outside constructor:
//car_1 :: car_1(string x_x, string y_y, string z_z, int w_w, string from){
    //cout<<"car from "<<from<<endl;
   // brand = x_x;
   // model = y_y;
    //color = z_z;
   // year = w_w;
//}
//------------------------------------------------------------------------------------------------------------
// outside class method(behavior): {type - class_name :: function_name}
// You cannot give default values ​​to functions outside of a class. ==>> you can not do (string name = "x")
void car_1 :: outside_method(){
    cout<<"hello cpp programer!!!\n";
}
void car_1 :: outside_method_2(string name, int age){
    cout<<"you are "<<name<<" and have "<<age<<" years old.\n";
}


int main(){
    cout<<"*************************************************************\n";
    cout<<"Object Oriented Programing is (OOP): \n";
    cout<<"1_Encapsulation (Hiding Data)\n";
    cout<<"2_Abstraction\n";
    cout<<"3_Inheritance\n";
    cout<<"4_Polymorphism (Generalization)\n";
    cout<<"*************************************************************\n";
    cout<<"this page we learn(class, object, Encapsulation, Abstraction)\n";
    cout<<"*************************************************************\n";

    // creat a object:
    car_1 car_amin_1;
    car_amin_1.brand = "BMW";
    car_amin_1.model = "m3";
    car_amin_1.color = "black";
    car_amin_1.year = 2020;
    cout<<"amin'car_1 is "<<car_amin_1.brand<<" model "<<car_amin_1.model<<" ,color "<<car_amin_1.color<<" and year "<<car_amin_1.year<<endl;
    
    // multiple object:
    car_1 car_amin_2;
    car_amin_2.brand = "Benz";
    car_amin_2.model = "cls";
    car_amin_2.color = "white";
    car_amin_2.year = 2022;
    cout<<"amin'car_2 is "<<car_amin_2.brand<<" model "<<car_amin_2.model<<" ,color "<<car_amin_2.color<<" and year "<<car_amin_2.year<<endl;
    
    // methods:
    car_1 behavior;
    // (1) => inside class:
    behavior.inside_method();
    behavior.inside_method_2();
    // (2) => outside class:
    behavior.outside_method();
    behavior.outside_method_2("reza", 40);
    
    // constructors:
    // (1) => inside constructor:
    car_1 car_amin_3;
    car_1 car_amin_4("tesla","model_3", "green", 2024);
    cout<<"amin'car_4 is "<<car_amin_4.brand<<" model "<<car_amin_4.model<<" ,color "<<car_amin_4.color<<" and year "<<car_amin_4.year<<endl;
    // (2) => outside constructor:
    //  like inside constructor..........

    // Access Private Members:
    car_1 car_amin_5;
    car_amin_5.set_price(60000);
    cout<<"amin's car price is "<<car_amin_5.get_price()<<" $.\n";



    return 0;
}