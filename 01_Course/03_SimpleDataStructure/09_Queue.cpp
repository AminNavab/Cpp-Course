#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Queue = A queue stores multiple elements in a specific order, called FIFO.
    // FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket.
    //          The first person to stand in line is also the first who can pay and leave the supermarket.
    //          This way of organizing elements is called FIFO in computer science and programming.

    // Unlike vectors, elements in the queue are not accessed by index numbers.
    //        Since queue elements are added at the end and removed from the front,
    //        you can only access an element at the front or the back.
    // NOTE : Queues are often mentioned together with Stacks.

    // creat a queue :
    // Note: You cannot add elements to the queue at the time of declaration, like you can with vectors.
    // queue - <type> - queue_name;
    queue<string>cars_1;
    cout<<"****************************\n";
    // add element :
    // queue_name .push(new_element);
    cars_1.push("bmw");
    cars_1.push("benz");
    cars_1.push("volvo");
    cars_1.push("tesla");

    // The queue will look like this:
    // bmw (front (first) element)
    // benz
    // volvo
    // tesla (back (last) element)
    cout<<"***************************\n";
    // access queue element :
    // NOTE : You cannot access queue elements by referring to index numbers, like you would with arrays and vectors.
    //               In a queue, you can only access the element at the front or the back, using .front() and .back() respectively.
    cout<< cars_1.front()<<endl;
    cout<< cars_1.back()<<endl;
    cout<<"********************************\n";
    // Change Front and Back Elements
    // You can also use .front and .back to change the value of the front and back elements:
    cars_1.front() = "bmw_1";
    cars_1.back() = "tesla_1";
    cout<< cars_1.front()<<endl;
    cout<< cars_1.back()<<endl;
    cout<<"********************************\n";
    // remove queue element :
    // You can use the .pop() function to remove an element from the queue.
    //         This will remove the front element (the first and oldest element that was added to the queue).
    cars_1.pop();
    cout<< cars_1.front()<<endl;
    cout<< cars_1.back()<<endl;
    cout<<"********************************\n";
    // queue size :
    // queue_name .size();
    cout<< cars_1.size()<<endl;
    cout<<"********************************\n";
    // Check if the Queue is Empty :
    // queue_name .empty();
    queue<string>cars_2;
    cout<< cars_1.empty()<<endl;
    cout<< cars_2.empty()<<endl;
    cout<<"********************************\n";


    return 0;
}