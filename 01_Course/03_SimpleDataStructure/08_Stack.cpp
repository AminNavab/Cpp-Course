#include<iostream>
#include<stack>
using namespace std;
int main(){
    // Stsck = A stack stores multiple elements in a specific order, called LIFO.
    // # NOTE # = LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes,
    //               where pancakes are both added and removed from the top. So when removing a pancake,
    //               it will always be the last one you added.
    //               This way of organizing elements is called LIFO in computer science and programming.

    // # NOTE # = Unlike vectors, elements in the stack are not accessed by index numbers.
    //            Since elements are added and removed from the top, you can only access the element at the top of the stack.
    // NOTE  = Stacks are often mentioned together with Queues.
    
    // Creat a stsck:
    // Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:
    // stack - <type> - stack_name;
    stack<string>cars;
    cout<< "*****************************\n";
    // add element stack :
    // stack_name .push(new_element);
    cars.push("bmw");
    cars.push("benz");
    cars.push("volvo");
    cars.push("tesla");
    // NOTE : The stack will look like this (remember that the last element added is the top element):
    // tesla
    // volvo
    // benz
    // bmw
    cout<<"******************************************\n";
    // access stack element :
    // NOTE : You cannot access stack elements by referring to index numbers, like you would with arrays and vectors
    //           In a stack, you can only access the top element, which is done using the .top() function:
    cout<< cars.top()<<endl;
    cout<< cars.top()<<endl;
    cout<< cars.top()<<endl;
    cout<<"******************************************\n";
    // change a top stack element :
    // stack_name .top() = new_element;
    cars.top() = "tesla_1";
    cout<< cars.top()<<endl;
    cout<<"******************************************\n";
    // remove a top stack element :
    // stack_name .pop();
    cars.pop();
    cout<< cars.top()<<endl;
    cout<<"******************************************\n";
    // stack size :
    // stack_name .size();
    cout<< cars.size()<<endl;
    cout<<"******************************************\n";
    // Check if the Stack is Empty :
    // stack_name .empty();
    stack<string>cars_1;
    cout<< cars.empty()<<endl;
    cout<< cars_1.empty()<<endl;
    cout<<"******************************************\n";




    return 0;
}