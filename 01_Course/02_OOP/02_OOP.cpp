#include<iostream>
using namespace std;
// creat a father_1 class;
class car_father_1{
    public:
    int year = 2020;
    string brand;
    void start(){
        cout<<"car is starting......\n";
    }
    protected:
    int x_1;
};
// creat a father_2 class;
class car_father_2{
    public:
    void hock(){
        cout<<"booog...booog...boood......\n";
    }
    protected:
    int x_2;
};


// creat a son class:
// class_son : public - father{
//      # code;
// };
class car_son : public car_father_1{
    public:
    string model;
    string color;
    void stop(){
        cout<<"car is stoping.....\n";
    }
    void set_price(int x){
        price = x;
    }
    int get_price(){
        return price;
    }
    private:
    int price;
};
// Multilevel Inheritance:
//             A class can also be derived from one class, which is already derived from another class.
class car_son_son : public car_son{
    public:
    void run(){
        cout<<"car is running.......\n";
    }
};
// Multiple Inheritance:
//            A class can also be derived from more than one base class.
class car_son_2father : public car_father_1, public car_father_2{
    public:
    void speed(int speed){
        cout<<"my car's speed is "<<speed<<" KM/H\n";
    }
    void set_x_1(int x){
        x_1 = x;
    }
    int get_x_1(){
        return x_1;
    }
    void set_x_2(int x){
        x_2 = x;
    }
    int get_x_2(){
        return x_2;
    }
};

int main(){
    cout<<"******************************************************************\n";
    cout<<"this page we learn (Inheritance)\n";
    cout<<"derived class (child) = the class that inherits from another class\n";
    cout<<"base class (parent) = the class being inherited from\n";
    cout<<"*******************************************************************\n";
    // Derived class (son):
    car_son car_amin;
    car_amin.start();
    car_amin.stop();
    car_amin.brand = "BMW";
    car_amin.color = "black";
    car_amin.model = "m3";
    car_amin.set_price(60000);
    cout<<"amin's car is "<<car_amin.brand<<", model "<<car_amin.model<<", "<<car_amin.year<<", color is "<<car_amin.color<<", price is "<<car_amin.get_price()<<"."<<endl;
    cout<<"------------------------\n";
    // Multilevel Inheritance(son_son):
    car_son_son car_amin_2;
    // of class(son_son):
    car_amin_2.run();
    // of class(son):
    car_amin_2.stop();
    // of class(father):
    car_amin_2.start();
    cout<<"------------------------\n";
    // Multiple Inheritance:
    car_son_2father car_amin_3;
    // of class(car_son_2father):
    car_amin_3.speed(220);
    // of class(father_1):
    car_amin_3.start();
    car_amin_3.set_x_1(10);
    cout<< car_amin_3.get_x_1()<<endl;
    // of class(father_2):
    car_amin_3.hock();
    car_amin_3.set_x_2(20);
    cout<< car_amin_3.get_x_2()<<endl;
    cout<<"------------------------\n";


    return 0;
}