#include<iostream>
using namespace std;
//By giving a name to the structure, you can treat it as a data type. 
//     This means that you can create variables with this structure anywhere in the program at any time.
//To declare a variable that uses the structure,
//     use the name of the structure as the data type of the variable:

// creat a structur:
// ***(1)*** => outside the function_main
// struct - structure_name{
//    # variables
//}; 
struct my_structure_1{
  int age_1;
  string name_1;
  double wight_1;
  char unit_1;
};
struct  car{
  string brand;
  string model;
  string color;
  int year;
  bool helth;
};
void print_structur_1(car car);
void fiil(car x, string color, bool helth);

int main(){ 
    // struct = a structure that group related variables under one name
    //          struct can contain many different data type (struct, int, double, bool, etc)
    //          variable in a struct are know as "member"
    //          member can be access with . "class member access operator"
    //************************************** */
    // creat a structur:
    // ***(2)***  => inside the function_main
    // struct{
    //    # variables
    //} - structure_name;
    struct{
        int age_2;
        string name_2;
        double wight_2;
        char unit_2;
    } my_structure_2;
    // Assign values to members of myStructure:
    // (1) : structure_main - structure_name_new;
    //       structure_name_new . variables = values;
    my_structure_1 human;  // mant times....(beacuse my_structure_1 is in outside the function_main)
    human.age_1 = 20;
    human.name_1 = "amin_1";
    human.wight_1 = 181.0;
    human.unit_1 = 'm';
    //-----------------------------
    // (2) : structure_main_name . variables = values;
    my_structure_2.age_2 = 20;
    my_structure_2.name_2 = "amin";
    my_structure_2.wight_2 = 1.80;
    my_structure_2.unit_2 = 'm';
    // usenig function for structure(assign, print,.......):
    // type - function_name(structur_main - structur_name_new, etc variablt....){
    //     ## code;
    // }
    car car_x;
    fiil(car_x,"blue",true);
    print_structur_1(car_x);

    // print members of structure
    cout<< my_structure_2.age_2<<endl;
    cout<< my_structure_2.name_2<<endl;
    cout<< my_structure_2.wight_2<<endl;
    cout<< my_structure_2.unit_2<<endl;
    // structure_1
    cout<< "you are "<<human.name_1<<" and you have "<<human.age_1<<" years old and your wight is "<<human.wight_1<<" "<<human.unit_1<<" ."<<endl;
    // structure_2
    cout<< "you are "<<my_structure_2.name_2<<" and you have "<<my_structure_2.age_2<<" years old and your wight is "<<my_structure_2.wight_2<<" "<<my_structure_2.unit_2<<" ."<<endl;
    // ## you can use the functuion = end page!! ==>> just for type(1)
    cout<< "*********************\n";
    // one structure in multiple variable:
    // type (1)
    // car_1_1
    car car_1_1;
    car_1_1.brand = "x";
    car_1_1.model = "y";
    car_1_1.year = 1111;
    // car_2_1
    car car_2_1;
    car_2_1.brand = "z";
    car_2_1.model = "w";
    car_2_1.year = 2222;
    // type (2)
    struct {
      string brand;
      string model;
      int year;
    } Car_1_2,Car_2_2;
    // car_1_2
    Car_1_2.brand = "BMW";
    Car_1_2.model = "X5";
    Car_1_2.year = 1999;
    // car_2_2
    Car_2_2.brand = "Ford";
    Car_2_2.model = "Mustang";
    Car_2_2.year = 1969;
    // print with function => just for type (1):
    print_structur_1(car_1_1);
    print_structur_1(car_2_1);
    cout << Car_1_2.brand << " " << Car_1_2.model << " " << Car_1_2.year << "\n";
    cout << Car_2_2.brand << " " << Car_2_2.model << " " << Car_2_2.year << "\n";
  

    

    return 0;
}
void print_structur_1(car car){ // or (car &car)???
  cout << car.brand << " " << car.model << " " << car.year << "\n";
}
void fiil(car x, string color, bool helth){ // or (car &x, string color, bool helth)???
  x.color = color;
  x.helth = helth;
  cout<< "car_x : "<<x.color<<" , "<<x.helth<<endl;
}
