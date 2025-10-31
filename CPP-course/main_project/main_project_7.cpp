#include<iostream>
using namespace std;
class Publication{
    protected:
    float price;
    public:
    void get_data(){
        cout<<"Enter Price: ";
        cin>>price;
    }
    void put_data(){
        cout<<"Price: "<<price<<endl;
    }
};
class Book : public Publication{
    private:
    int pagecount;
    public:
    void get_data(){
        cout<<"Enter Number Of Page: ";
        cin>>pagecount;
        Publication ::get_data();
    }
    void put_data(){
        cout<<"Number Of Page: "<<pagecount<<endl;
        Publication::put_data();
    }
};
class Tape : public Publication{
    private:
    float time;
    public:
    void get_data(){
        cout<<"Enter Time In Minutes: ";
        cin>>time;
        Publication::get_data();
    }
    void put_data(){
        cout<<"Time: "<<time<<endl;
        Publication::put_data();
    }

};
int main(){
    Book b;
    Tape t;
    int op;
    cout<<"1.Book Information: \n";
    cout<<"2.Tape Information: \n";
    cout<<"Pless Enter Your Choice: \n";
    cin>>op;
    switch (op){
    case 1:
    cout<<"\t\t----- BOOK INFORMATION -----\n";
    b.get_data();
    b.put_data();
        break;
    case 2:
    cout<<"\t\t----- TAPE INFORMATION -----\n";
    t.get_data();
    t.put_data();
        break;
    }

















    return 0;
}