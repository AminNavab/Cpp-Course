#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
void swap_whit_address(string &x, string &y);
void walk(int steps);
int factorial(int num);

template<typename T>

auto sum(T x, T y);

int main(){
    // random number
    srand(time(NULL));
    int num = rand() % 5; // ==>> 0,1,2,3,4
    int num_1 = (rand() % 10) +1;  // ==>> 1,2,3,4,5,6,7,8,9,10
    cout<<num<<endl<<num_1<<endl;
    cout<<"**********************************************\n";
    // double(int) to double(double)
    double a = 10;
    cout<<setprecision(2)<<fixed<<a<<endl;
    double a_1 = 10.10;
    cout<<setprecision(2)<<fixed<<a_1<<endl;
    double a_2 = 10;
    cout<<setprecision(5)<<fixed<<a_2<<endl;
    cout<<"**********************************************\n";
    // sizeof() = determines the size in bytes of a (variable data type, class, objects, etc)
    double gpa = 3.5;
    cout<< sizeof(gpa)<<" bytes\n";
    cout<< sizeof(int)<<" bytes\n";
    cout<< sizeof(double)<<" bytes\n";
    cout<< sizeof(string)<<" bytes\n";
    cout<< sizeof(char)<<" bytes\n";
    cout<< sizeof(string)<<" bytes\n";
    cout<< sizeof(bool)<<" bytes\n";
    cout<<"**********************************************\n";
    // memory address = a location in memory ehere data is stored a memory address can accessed whit(address - of operator)
    // & - variable = variable_address ==>> hex !!
    int b = 10;
    double b_1 = 10.0;
    string b_2 = "10";
    char b_3 = 'a_3';
    bool b_4 = true;
    cout<< &b<<endl;
    cout<< &b_1<<endl;
    cout<< &b_2<<endl;
    cout<< &b_3<<endl;
    cout<< &b_4<<endl;
    cout<<"*****************************************\n";
    //pass by value and pass by reference
    // (x ==>> y ==> z ==>> w ==>> .........)
    string x = "amin";
    string y = "navb";
    string temp;
    temp = x;
    x = y;
    y = temp;
    cout << "x = "<<x<<endl;
    cout << "y = "<<y<<endl;
    swap_whit_address(x,y);
    cout<<"******************************************\n";
    // const parameter = parameter that is effectively read-only code is more secure 
    //                          and conveys intent useful for reference and pointers
    const string name_a = "amin";
    const int age_a = 20;

    // name_a = "ali";    (not can do this)   
    // age_a = 22;        (not can do this)
    cout<<"**********************************************\n";
    // referenc = A reference variable is a "reference" to an existing variable,
    //               and it is created with the & operator
    string name_x = "amin";
    string &name_2 = name_x;    //referenc to name_1
    cout<< name_x<<endl;
    cout<< name_2<< endl;


    cout<<"****************************************************\n";
    // pointers = variable that stores a memory address of another variable
    //               sometime it's easier to work whit an address
    // { & } = address - of operator
    // { * } = dereference operator
    // *variable_2 = &variable_1
    string name_1 = "amin";
    int age_1 = 20;
    string *pName = &name_1;
    int *pAge = &age_1;
    cout<< pName<<"-"<<pAge<<endl;    // memory address of value
    cout<< &pName<<"-"<<&pAge<<endl;   // memory address of value
    cout<< *pName<<"-"<<*pAge<<endl;   // value of variable_1
    string foods[3] = {"hotdog", "sushi", "pizza"};
    // string *pFoods = &foods; ( wrong !!)
    string *pFoods = foods;
    cout<<pFoods<<endl;
    cout<<*pFoods<<endl; // (first element)

    // NULL value = a special value that means something has no value.
    //                when a pointer is holding a null value,
    //                that pointer is not pointing at anything (null pointer)

    //nullptr = keyword represents a null pointer literal
    
    // nullptr are helpful when determining if an address was successsfully assigned to a pointer
    // when using pointers, be careful that your code isn,t dereferencing nullptr or pointing to free memory 
    //    this will cause undefined behavior
    int *pointer = nullptr;
    int x_p = 123;
    pointer = &x_p;
    if(pointer == nullptr){
        cout<<"address was not assigned !!\n";
    }
    else{
        cout<<"address was assigned !!\n";
        cout<< *pointer<<endl;
    }
    cout<<"*****************************************************\n";
    // dynamic memory = memory that s allocated after the program is already compiled and running
    //                     use the "new" operator to allocate memory in the heap rather then the stack.
    //                     useful when we don't know how much memory we will need.
    //                     makes our programs more flexible, especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;
    *pNum = 20;
    cout<<"address is "<<pNum<<endl;
    cout<<"value is "<<*pNum<<endl;
    
    char *pGrades = NULL;
    int size = 5;
    pGrades = new char[size];
    for(int i = 0; i<size; i++){
        cout<<"enter grades "<<i+1<<" : ";
        cin>>pGrades[i];
    }
    for(int i = 0; i<size; i++){
        cout<<pGrades[i]<<" ";
    }
    delete[] pGrades;
    cout<<"\n****************************************\n";
    // recursion = a programing technique a function invokes
    //                itself from within break a complex concept into a repeatable single single step
    // (iterativ vs recursion)
    // # advantages = less code and is cleaner useful for sorting and searching algorithms
    // # disadvantages = user more memory and slower
    walk(5);
    cout<<endl<<factorial(5)<<endl;
    cout<<"****************************************\n";
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions 
    //                      as needee, each using different data types

    //cout<< sum (1,2)<<endl;      (????????)
    //cout<< sum (1.1,2.1)<<endl;  (??????????)
    cout<<"****************************************\n";
    // math ==>>(for use the math, include<cmath> )
    cout<< min(2,5)<<endl;
    cout<< max(2,5)<<endl;
    cout<< sqrt(16)<<endl;
    cout<< round(16.55555555555)<<endl;
    cout<< log(2)<<endl;
    // and ................
    cout<< "****************************************\n";
    //Random Number :
    // cread a random number  =  .rand()
    int x_random = rand();
    cout<< x_random<<endl;
    // NOTE = To get more control over the random number,
    //        for example, if you only want a random number between 0 and 100, you can use the following formula:
    int x_random_1 = rand() % 101;
    cout<<x_random_1<<endl;
    // NOTE = The examples above just outputs a random number once.
    //        They don't output different random numbers each time the program runs.
    //        To fix this, you can use the srand() function and add the time() function from the <ctime> library.
    srand(time(0));
    int x_random_2 = rand() % 101;
    cout<< x_random_2<<endl;


    

    return 0;

}
void swap_whit_address(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
    cout << "x = "<<x<<endl;
    cout << "y = "<<y<<endl;   
}
void walk(int steps){
    if(steps>0){
       cout<<steps<<"you walking.....";
       walk(steps-1);
    }
}
int factorial(int num){
    if(num>1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
template<typename T>
auto sum(T x, T y){
    T sum = (x+y);
    return sum;
}
