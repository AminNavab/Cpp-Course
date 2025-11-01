#include<iostream>
using namespace std;
// toyota_Car ----> Car ----> Vehicle
class Vehicle{
    private:
    string brand, model;
    int year;
    public:
    void input_data(){
        cout<<"Enter Brand(Company Name): ";
        getline(cin>>ws,brand);
        cout<<"Enter Model: ";
        getline(cin>>ws,model);
        cout<<"Enter Year: ";
        cin>>year;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
class Car : public Vehicle{
    private:
    int num_door;
    public:
    void input_data(){
        Vehicle::input_data();
        cout<<"Enter Number Of Doors: ";
        cin>>num_door;
    }
    void display(){
        Vehicle::display();
        cout<<"Doors: "<<num_door<<endl;
    }
};
class Car_x : public Car{
    private:
    string color;
    public:
    void input_data(){
        Car::input_data();
        cout<<"Enter Color: ";
        getline(cin>>ws,color);
    }
    void display(){
        Car::display();
        cout<<"Color: "<<color<<endl;
    }
};

int main(){
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t____ Vehicle Management System ____\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Car_x my_car;
    cout<<"\t\t********** INPUT CAR INFO **********\n";
    my_car.input_data();
    cout<<"\t\t********* OUTPUT CAR INFO **********\n";
    my_car.display();











    return 0;
}