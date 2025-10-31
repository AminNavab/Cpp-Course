#include<iostream>
using namespace std;
int main(){
    cout<<"--------------------\n";
    cout<<"***** NEXT DAY *****\n";
    cout<<"--------------------\n";
    int day;
    int mount;
    int year;
    cout<< "enter day : ";
    cin>> day;
    while (day<1){
        cout<< "enter day : ";
        cin>> day;
    }
    cout<< "enter mount : ";
    cin>> mount;
    while ((mount<1)||(mount>12)){
        cout<< "enter mount : ";
        cin>> mount;
    }
    cout<< "enter year : ";
    cin>> year;
    int day_next;
    int mount_next;
    int year_next;
    switch (mount){
    case 1:
        (day<31)? (day_next = day+1) && (mount_next = mount) && (year_next = year) : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 2:
        (day<31)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case  3:
        (day<31)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 4:
        (day<29)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 5:
        (day<31)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 6:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 7:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 8:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 9:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 10:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 11:
        (day<30)?( day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = mount+1) && (year_next = year));
        break;
    case 12:
        (day<30)? (day_next = day+1) && (mount_next = mount) && (year_next = year)  : ((day_next =1) && (mount_next = 1) && (year_next = year+1));
        break;
    }
    
    cout<<"next dat is "<<year_next<<","<<mount_next<<","<<day_next;

    cout<<"\n--------------------";
    return 0;
}