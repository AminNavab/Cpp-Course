#include<iostream>
using namespace std;
// function = a block of reusable code 
// type - function_name(){
//    ## code;
// }

// (1) =>  چیزی برنمیگردونه به تابع اصلی 
void human();
void human_1(string name_2);
void print_array_1(int array_1[5]);
void print_array_2(int array_2[]);
// ***** توابعی که یک مقداری رو به تابع اصلی برمیگردون ****
// return = return a value back the spot , where you called the encompassing function
//(2) int
int number();
int number_1(int num_1);
// (3) double
double number_2();
double number_3(double num_5);
//(4) string
string full_name_1();
string full_name_2(string first , string last);

// function input : 
// (1) = input in function
// (2) = input in int main_function
// (3) = You can also use a default parameter value, by using the equals sign (=). 
// type - function_name(variable = value){}
// ## for function inputs you can use referenc( &x );  when ????????????


// Now that you understand how functions work,
//    it is important to learn how variables act inside and outside of functions:
// (1) : local scope = A variable created inside a function belongs to the local scope of that function,
//            and can only be used inside that function
void local_scope();
// (2) : global scope = A variable created outside of a function,
//            is called a global variable and belongs to the global scope. 
//            # Global variables are available from within any scope, global and local.
int x_2 = 10;
void global_scope();
// ## If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables;
//           One available in the global scope (outside the function) and one available in the local scope (inside the function):
// ## In general, you should be careful with global variables, since they can be accessed and modified from any function:
// ## ** = To sum up, use local variables (with good variable names) as much as you can. 

// Recursion = Recursion is the technique of making a function call itself.
//                 This technique provides a way to break complicated problems down into simple problems which are easier to solve.
int sum(int k);
//#######################################################################################################################
int main(){
    //(1) void
    human();

    string name_2;
    cout<<"tell me your name_1:\n";
    cin>>name_2;
    human_1(name_2);
    human_1("amin_3");
    int array_a[5] = {1,2,3,4,5};
    print_array_1(array_a);
    int array_aa[] = {1,2,3,4,5,6,7,8,9};
    print_array_2(array_aa);
    cout<<"********************************\n";
    //(2) int
    int num_a{number()};
    cout<<num_a * 2<<"\n";
    int num_b = number();
    cout<<num_b * 2<<"\n";

    int num;
    cout<<"enter your number_3: \n";
    cin >> num;
    int num_c{number_1(num)};
    int num_d = number_1(num);
    cout<<num_c + 1<<endl;
    cout<<num_d + 2<<endl;
    cout<<"\n********************************\n";
    //(3)
    double num_e = number_2();
    cout<< num_e<<endl;

    double num_x;
    cout<<"enter number_5:\n";
    cin>>num_x;
    double num_f = number_3(num_x);
    cout<<num_f<<endl;
    cout<<"************************************\n";
    //(4)
    string person_1 = full_name_1();
    cout<<person_1<<endl;
    string person_2 = full_name_2("amin","navab");
    cout<<person_2<<endl;

    string first;
    cout<<"tell your first name: \n";
    cin>>first;
    string last;
    cout<<"tell your last name: \n";
    cin>>last;
    string person_3 = full_name_2(first,last);
    cout<<person_3;
    cout<<"***************************\n";
    // local scope:
    local_scope();
    // cout<< x_1;      # error!!!!!!!!
    //-------------
    // global scope:
    global_scope();   // use x_2 in function
    cout<< "x_2 = "<<x_2<<endl;  // use x_2 in int_main
    cout<<"*******************\n";
    int result = sum(10);
    cout<< result<<endl;




    return 0 ;
}
// (1) =>  چیزی برنمیگردونه به تابع اصلی 
void human(){
    string name_1{};
    cout << "tell me your name_1\n";
    cin>> name_1;
    cout<<"hello "<<name_1<<"\n";
}
void human_1(string name_2){
    cout<<"hello "<<name_2<<"\n";
}
void print_array_1(int array_1[5]){
    for(int i = 0; i<5; i++){
        cout<< array_1[i]<<endl;
    }
    cout<<"*********\n";
}
void print_array_2(int array_2[]){
    for(int i = 0; i<=sizeof(array_2); i++){
        cout<< array_2[i]<<endl;
    }

}
// ***** توابعی که یک مقداری رو به تابع اصلی برمیگردون ****
// return = return a value back the spot , where you called the encompassing function
//(2) int
int number(){
    cout<<"enter number_1\n";
    int num{};
    cin>>num;
    return num;
}     
int number_1(int num_1){
    int x = num_1 * num_1;
    return x;
}

// (3) double
double number_2(){
    double num_4;
    cout<<"enter number_4:\n";
    cin>>num_4;
    double y = num_4 * 2;
    return y;
}
double number_3(double num_5){
    double y_1 = num_5 * 5;
    return y_1;
}
//(4) string
string full_name_1(){
    string firs_nsme{};
    cout<<"tell your first name : \n";
    getline(cin>>ws,firs_nsme);
    string last_name{};
    cout<<"tell your last name :\n";
    cin>>last_name;
    string full_name = firs_nsme +" "+ last_name;
    return "you are "+full_name;
}
string full_name_2(string first , string last){
    return "you are "+first+" "+last;
}
void local_scope(){
    int x_1 = 5;
    cout<< "x_1 = "<<x_1<<endl;
}
void global_scope(){
    cout<< "x_2 = "<<x_2<<endl;
}
int sum(int k) {
    if (k > 0) {
      return k + sum(k - 1);
    }
    else {
      return 0;
    }
  }
  