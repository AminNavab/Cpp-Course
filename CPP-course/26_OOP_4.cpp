#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(int = 0, int = 0);
    ~point();
    void set_x(int a){x = a;}
    int get_x(){return x;}
    void set_y(int b){y = b;}
    int get_y(){return y;}
    void display();
};
point :: point(int a, int b):x(a), y(b){
    cout<<"it's constructor function\n";
}
point :: ~point(){
    cout<<"it's ~constructor function\n";
}
void point :: display(){
    cout<<"("<<x<<" , "<<y<<")\n";
}
int main(){
    point p1, p2(10), p3(10), p4(100,100);
    cout<<"------------------\n";
    p1.display();
    p2.set_x(2);
    p2.display();
    //p3.get_y(2);
    p3.display();
    p4.display();
    cout<<"---------------------\n";









    return 0;
}