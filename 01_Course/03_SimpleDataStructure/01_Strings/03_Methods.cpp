# include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"enter your name:\n";
    cin>>name;
    cout<<name;
    string full_name;
    cout<<"\nenter your full name\n";
    getline(cin>>ws,full_name);
    cout<<full_name;
    cout<<"\n************************************************************************\n";
    // length
    cout<<name.length() <<","<< full_name.length()<<endl;
    cout<<name.size() <<","<< full_name.size()<<endl;
    // access
    string name_1 = name;
    cout<<name_1[0]<<endl;
    cout<<name_1[1]<<endl;
    cout<<name_1[name.length() - 1]<<endl; // last element
    // change
    name_1[3] = 'r';
    cout<<name_1<<endl;
    // empty or not empty
    cout<<name.empty()<<","<<full_name.empty()<<endl;
    // at ==>>what is at......
    // .at(index) ====== string_name [index]
    cout<<name.at(0)<<endl;
    cout<<full_name.at(5)<<endl;
    name_1.at(3) = 'R';
    cout<<name_1<<endl;
    // clear
    name.clear();
    cout<<"hello "<<name<<","<<name.empty()<<endl;
    // erase (indixt_1,indixt_2) ==>> delet indext_1 to indixt_2
    full_name.erase(4,10);
    cout<<full_name<<endl;
    // append
    name.append("AMIN");
    cout<<name<<endl;
    string a = "a";
    string b = "b";
    string c = a.append(b);
    cout<< c<<endl;
    // insert (indix,"......")
    name.insert(4,"_N");
    cout<<name<<endl;
    // find (first thing)
    cout<<full_name.find("a")<<endl;
    cout<<full_name.find("v")<<endl;
    // creat string (an array of characters)
    char name_char[] = "amin navabzade";
    cout<<name_char<<endl;

    // NOTE :
    // (1) = append() === insert()
    // (2) = clear() === erase()
    // (3) = at(index) === [index]
    // (4) = char array[] === string


    return 0;
}