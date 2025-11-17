#include<iostream>
using namespace std;

    // enum = enumerations ==>> is a special type that
    //       represents a group of constants (unchangeable values). 
    //       a user-defined date that consists
    //       of paired named-integer constants.
    //       GREAT if you have a set of potential options

    // creat enum: As you know, the first item of an enum has the value 0.
    //                The second has the value 1, and so on.
    // enum - enum_name{ nameds - integers};
    enum day{saturday = 0,sunday = 1, monday = 2, tuesday = 3, wednesdat = 4, thursday = 5, friday = 6};
    // change values:
    //enum day{saturday_1 = 10,sunday_1 = 11, monday_1 = 12, tuesday_1 = 13, wednesdat_1 = 14, thursday_1 = 15, friday_1 = 16};
    //enum day{saturday_2 = 20,sunday_2, monday_2, tuesday_2, wednesdat_2, thursday_2, friday_2};
int main(){
    // assign an enum:
    day today = friday;
    enum day tomarow = saturday;
    // use an enum:
    // type(1)
    switch (today){
        case saturday: cout<< "it's saturday...\n";
            break;
        case sunday: cout<< "it's sunday...\n";
            break;
        case monday: cout<< "it's monday...\n";
            break;
        case tuesday: cout<< "it's tuesday...\n";
            break;
        case wednesdat: cout<< "it's wednesday...\n";
            break;
        case thursday: cout<< "it;s thursday...\n";
            break;
        case friday: cout<< "it's friday...\n";
            break;
    }
    switch (today){
        case 0: cout<< "it's saturday...\n";
            break;
        case 1: cout<< "it's sunday...\n";
            break;
        case 2: cout<< "it's monday...\n";
            break;
        case 3: cout<< "it's tuesday...\n";
            break;
        case 4: cout<< "it's wednesday...\n";
            break;
        case 5: cout<< "it's thursday.....\n";
            break;
        case 6: cout<< "it's friday...\n";
            break;
    }
    switch (tomarow){
        case saturday: cout<< "it's saturday...\n";
            break;
        case sunday: cout<< "it's sunday...\n";
            break;
        case monday: cout<< "it's monday...\n";
            break;
        case tuesday: cout<< "it's tuesday...\n";
            break;
        case wednesdat: cout<< "it's wednesday...\n";
            break;
        case thursday: cout<< "it;s thursday...\n";
            break;
        case friday: cout<< "it's friday...\n";
            break;
    }
    switch (tomarow){
        case 0: cout<< "it's saturday...\n";
            break;
        case 1: cout<< "it's sunday...\n";
            break;
        case 2: cout<< "it's monday...\n";
            break;
        case 3: cout<< "it's tuesday...\n";
            break;
        case 4: cout<< "it's wednesday...\n";
            break;
        case 5: cout<< "it's thursday.....\n";
            break;
        case 6: cout<< "it's friday...\n";
            break;
    }
    // type(2)
    enum day day = wednesdat;
    enum day day_1 = saturday;
    cout<< "day is "<<day<<endl;
    cout<< "day_1 is "<<day_1<<endl;
    cout<< "**********************\n";
    // change values:
    enum day day_a = saturday;
    cout<<day_a;


    



    return 0;
}