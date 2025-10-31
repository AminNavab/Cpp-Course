#include<iostream>
#include<vector>
using namespace std;
void sort_array_1(int array[], int size);
int main(){
    // sort :
    cout<<"enter array size : ";
    int size;
    cin>>size;
    int num[size];
    int x = 0;
    do
    {
        cout<<"enter number in index "<<x<<" : ";
        cin>>num[x];
        x++;
    } while (x < size);
    
    int size_2 = sizeof(num)/sizeof(int);
    cout<<"num : ";
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;
    sort_array_1(num, size_2);
    cout<<"sort_num : ";
    for(int i : num){
        cout<<i<<" ";
    }


    return 0;
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