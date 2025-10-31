#include<iostream>
#include<iomanip>
using namespace std;
class Digitel_clock{
    private:
    int Hours, Minutes, Second;
    public:
    Digitel_clock(int h, int min, int s){
        Hours = h;
        Minutes = min;
        Second = s;
    }
    void display(){
        if(Hours<10){
            cout<<setfill('0')<<setw(2)<<Hours<<":"<<setw(2)<<Minutes<<":"<<setw(2)<<Second<<" ";
        }
        else if(Minutes<10){
            cout<<setfill('0')<<setw(2)<<Hours<<":"<<setw(2)<<Minutes<<":"<<setw(2)<<Second<<" ";
        }
        else if(Second<10){
            cout<<setfill('0')<<setw(2)<<Hours<<":"<<setw(2)<<Minutes<<":"<<setw(2)<<Second<<" ";
        }
        else{
            cout<<Hours<<":"<<Minutes<<":"<<Second<<" ";
        }
        if(Hours>=12){
            cout<<"PM";
        }
        else{
            cout<<"AM";
        }

    }
};

int main(){
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t******* DIGITAL CLOCK *******\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    int Hours, Minutes, Second;
    do{
        cout<<"Enter Hours: ";
        cin>>Hours;
        cout<<"Enter Minutes: ";
        cin>>Minutes;
        cout<<"Enter Second: ";
        cin>>Second;
    } while (!(Hours>=0 && Hours<=24 && Minutes>=0 && Minutes<=60 && Second>=0 && Second<=60));
    
    
   
    Digitel_clock clock(Hours,Minutes,Second);
    clock.display();
    














    return 0;
}