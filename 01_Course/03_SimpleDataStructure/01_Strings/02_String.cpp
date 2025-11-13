#include<iostream>
#include<string>
using namespace std;
int main(){
    // input :
    string name;
    cout<<"enter name: ";
    getline(cin, name);
    cout<< name<<endl;
    cout<<"**********\n";
    // copy :
    // string_1 .assing(string_2) ==>>string_2 copy in string_1
    string x;
    string x_1 = "aaaaaaaa";
    x.assign(x_1);
    cout<< x<<endl;
    cout<<"**********\n";
    // access :
    // string [index];
    cout<<name[0]<<endl;
    cout<<name[1]<<endl;
    cout<<name[2]<<endl;
    cout<<"**********\n";
    // append ==>> string_1 (+) string_2
    string firsname = "amin";
    string lastname = "navab";
    firsname.append(lastname);
    cout<<firsname<<endl;
    cout<<"**********\n";
    // size
    // string .length()
    string z = "111111111111111";
    cout<< z.length()<<endl;
    cout<<"**********\n";
    // compare:
    // string_1 .compare(string_2)
    // string_1 == string_2 ==>> cout:0
    // string_1 < string_2 ==>> cout:1
    // string_1 > string_2 ==>> cout:-1
    string s_1 = "aaaa";
    string s_2 = "aaaa";
    string s_3 = "AAAA";
    cout<< s_1.compare(s_2)<<endl;
    cout<< s_3.compare(s_2)<<endl;
    cout<< s_1.compare(s_3)<<endl;
    cout<<"**********\n";
    // substr :
    // این‌تابع‌‌دو‌عدد‌صحيح‌مثبت‌را‌به‌عنوان‌ورودي‌پذیرفته و‌از‌موقعيت‌عدد‌اول‌‌به‌اندازه‌عدد‌دوم‌از‌
    // رشته‌جدا‌مي‌كند‌و‌برمي‌گرداند‌
    string w = "amin navabzade from iran";
    string w_1 = w.substr(3, 10);
    cout<< w_1<<endl;
    cout<<"**********\n";

    

    return 0;
}