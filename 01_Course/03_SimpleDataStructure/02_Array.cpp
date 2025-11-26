#include<iostream>

using namespace std;

double get_total(double array[], int size);
int serch_array(int array[], int size, int element);
void sort_array_1(int array[], int size);
void sort_array_2(int array[], int size);

int main(){
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number(start by 0 !)
    //         "kind of like a variable that holds multiple values"
    
    // creat array :
    // type - array_name - [size] = {........................};
    // (1)
    string car[] = {"bmw","benze","ferrari","corvet"};
    // (2)
    string car_1[2];
    car_1[0] = "mustang";
    car_1[1] = "camary";
    // access :
    cout<<car[0]<<endl;
    cout<<car[1]<<endl;
    cout<<car[2]<<endl;
    cout<<car[3]<<endl;

    cout << car_1[0] <<endl << car_1[1]<< endl;
    cout<<"***********************************\n";
    // edit item
    car[3] = "camaro";
    cout<< car[3]<<endl;
    car_1[0]  = "toyota";
    cout<<car_1[0]<<endl;
    cout<<"**************************************\n";
    // add ==>> in array we can't add new_element
    cout<<"*******************************\n";
    // size of()
    // The number of elements = sizeof(array_name) / sizeof(array_type)
    int num[] = {1,2,3,4,5,6};
    string name[] = {"1","2","3"};
    double num_1[] = {1,2,3,4,5,6};
    char name_1[] = {'a','b','c'};
    cout<<sizeof(num)<<" - "<<sizeof(int)<<" - "<<"The number of elements = "<<sizeof(num)/sizeof(int)<<endl;
    cout<<sizeof(name)<<" - "<<sizeof(string)<<" - "<<"The number of elements = "<<sizeof(name)/sizeof(string)<<endl;
    cout<<sizeof(num_1)<<" - "<<sizeof(double)<<" - "<<"The number of elements = "<<sizeof(num_1)/sizeof(double)<<endl;
    cout<<sizeof(name_1)<<" - "<<sizeof(char)<<" - "<<"The number of elements = "<<sizeof(name_1)/sizeof(char)<<endl;
    cout<<"****************************************\n";
    // show array :
    // (foreach loop) = loop that eases the traversal over an iterable data set
    int age[] = {10,20,30};
    // for loop :
    for(int i = 0; i<sizeof(age)/sizeof(int);i++){
        cout<<age[i]<<endl;
    }
    // while loop :
    int i_1 = 0;
    while(i_1 < sizeof(age)/sizeof(int)){
        cout<<age[i_1]<<endl;
        i_1++;
    }
    // foreach loop :
    // for(typr - new_variable : array_name){
    //    #(code) cout<< new_variable;
    //}
    for(int num : age){
        cout<<num<<endl;
    }
    cout<<"*******************************************\n";
    // pass array to a function
    double prices[]= {10.5,15.75,18.25,20,78.75};
    int size = sizeof(prices)/sizeof(prices[0]); // sizeof(arrat[0]) == sizeof(array_type)
    double total = get_total(prices,size);
    cout<< total<<" toman pool !!!!\n";
    cout<<"************************************************\n";
    // serch an array for an element
    int num_2[] = {1,2,3,4,5,6,7,8,9};
    int size_1 = sizeof(num_2)/sizeof(num_2[0]);
    int index;
    int my_num;
    cout<<"enter your num: \n";
    cin>>my_num;
    index = serch_array(num_2, size_1, my_num);
    if (index != -1){
        cout<<my_num<<" is at index "<<index<<endl;
    }
    else{
        cout<<my_num<<" is not in the array!!\n";
    }
    cout<< "*********************************************\n";
    // sort an array
    int numbers[] = {9,5,7,2,3,4,6,1,8,11,15,12,19};
    int numbers_1[] = {9,5,7,2,3,4,6,1,8,11,15,12,19};
    int size_2 = sizeof(numbers)/sizeof(numbers[0]);
    sort_array_1(numbers, size_2);
    for(int element : numbers){
        cout<<element<<endl;
    }
    sort_array_2(numbers_1, size_2);
    for(int element : numbers_1){
        cout<<element<<endl;
    }
    cout<<"******************************************\n";
    // fill() = fill a range of element whit a apecified value fill(begin, end, value)
    int size_3 = 3;
    string foods[size_3];
    fill(foods, foods + (size_3/3), "pizza");
    fill(foods+ (size_3/3), foods+ (size_3/3)*2, "hamburger");
    fill(foods+ (size_3/3)*2, foods+ size_3, "hotdog");
    for(string food:foods){
        cout<<food<<endl;
    }
    // fill an array whit input user
    string foods_1[5];
    int size_4 = sizeof(foods_1)/sizeof(foods_1[0]);
    for(int i = 0; i<size_4; i++){
        cout<<"enter your food number "<<i+1<<" : ";
        std::getline(std::cin, foods_1[i]);
    }
    for(string food : foods_1){
        cout<<food<<endl;
    }
    cout<<"**********************************************\n";
    // multi-dimensional array
    // # 2d array = {array_1, array_2, array_3, ......}
    // array [row (سطر)] [column (ستون)];
    // در‌اعالن‌آرایه‌هاي‌دوبعدي ذكر‌تعداد‌ستون ها‌الزامي‌است.
    int bmi[3][3] = {{20,21,22},{23,24,25},{26,27,28}};
    cout<<bmi[0][0]<<endl;
    int row = sizeof(bmi)/sizeof(bmi[0]);
    int column = sizeof(bmi[0])/sizeof(bmi[0][0]);
    for(int i = 0; i<row; i++){
        for(int j =0; j < column; j++){
            cout<<bmi[i][j]<<" ";
        }
        cout<<endl;
    }
    // # 3d array = {????????}
    // 
    string letters[2][2][2] = {{{"a","b"},{"c","d"}},{{"e","f"},{"g","h"}}} ;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                cout<< letters[i][j][k]<<" ";
            }
        }
    }
    cout<<"*********************************************\n";



    return 0;
}
double get_total(double array[], int size){
    double total = 0;
    for(int i = 0 ; i<size; i++){
        total += array[i];
    }
    return total;
}
int serch_array(int array[] , int size , int element){
    for(int i = 0; i<size; i++){
        if(array[i] == element){
           return i;
        }
    }
    return -1;
}
void sort_array_1(int array[], int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-i-1; j++){
            if(array[j] > array[j+1]){  // ##
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void sort_array_2(int array[], int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-i-1; j++){
            if(array[j] < array[j+1]){ // ##
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}