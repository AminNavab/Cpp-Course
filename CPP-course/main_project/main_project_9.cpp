#include<iostream>
using namespace std;
class FATHER{
    protected:
    int color_skin_F;
    int color_hair_F;
    int color_eye_F;
    float height_F;
    string disease_defeated_F;
    string disease_dependent_on_x_F;
    string disease_dominant_F;
    public:
    void get_data(){
        cout<<"Enter the father's skin color based on (white = 10 and black = 1): ";
        cin>>color_skin_F;
        cout<<"Enter father's hair color(1.Blonde , 2.Brown , 3.Black): ";
        cin>>color_hair_F;
        cout<<"Enter father's eye color(1.Green , 2.Blue , 3.Brown , 4.Black): ";
        cin>>color_eye_F;
        cout<<"Enter father's Height(cm): ";
        cin>>height_F;
    }

};
class MOTHER{
    protected:
    int color_skin_M;
    int color_hair_M;
    int color_eye_M;
    float height_M;
    string disease_defeated_M;
    string disease_dependent_on_x_M;
    string disease_dominant_M;
    public:
    void get_data(){
        cout<<"Enter the mother's skin color based on (white = 10 and black = 1): ";
        cin>>color_skin_M;
        cout<<"Enter mother's hair color(1.Blonde , 2.Brown , 3.Black): ";
        cin>>color_hair_M;
        cout<<"Enter mother's eye color(1.Green , 2.Blue , 3.Brown , 4.Black): ";
        cin>>color_eye_M;
        cout<<"Enter mother's Height(cm): ";
        cin>>height_M;
    }
};

class child : public FATHER, MOTHER{
    private:
    string first_name;
    string last_name;
    string date_of_birth;
    int color_skin;
    int color_hair;
    int color_eye;
    float height;
    string Gender;
    string color_skin_2;
    string color_hair_2;
    string color_eye_2;
    public:
    void get_data(){
        cout<<"Enter baby's first name: ";
        getline(cin>>ws, first_name);
        cout<<"Enter baby's last name: ";
        getline(cin>>ws, last_name);
        cout<<"Enter baby's date of birth: ";
        getline(cin>>ws, date_of_birth);
        cout<<"Enter baby's Gender(girl, boy): ";
        cin>>Gender;
        cout<<"____________________________________\n";
        cout<<"the baby is "<<first_name<<" "<<last_name<<" and baby is "<<Gender<<endl;
        cout<<"The child's date of birth: "<<date_of_birth<<endl;
        FATHER ::get_data();
        MOTHER ::get_data();
    }
    void output_data(){
        cout<<"_________________________________________________________\n";
        if(color_skin_F<color_skin_M){
            color_skin = color_skin_F;
        }
        else if(color_skin_M<color_skin_F){
            color_skin = color_skin_M;
        }
        else{
            color_skin = color_skin_F;
        }
        switch(color_skin){
            case 1:
            color_skin_2 = "Black";
            break;
            case 5:
            color_skin_2 = "Brown";
            break;
            case 10:
            color_skin_2 = "White";
            break;
        }
        cout<<"Skin color(white = 10 and black = 1) is between mother and father But it probably is: "<<color_skin_2<<endl;
        if(color_hair_F>color_hair_M){
            color_hair = color_hair_F;
        }
        else if(color_hair_M>color_hair_F){
            color_hair = color_hair_M;
        }
        else{
            color_hair = color_hair_F;
        }
        switch(color_hair){
            case 1:
            color_hair_2 = "Blonde";
            break;
            case 2:
            color_hair_2 = "Brown";
            break;
            case 3:
            color_hair_2 = "Black";
            break;
        }
        cout<<"Hair color(1.Blonde , 2.Brown , 3.Black) is between mother and father But it probably is: "<<color_hair_2<<endl;
        if(color_eye_F>color_eye_M){
            color_eye = color_eye_F;
        }
        else if(color_eye_M>color_eye_F){
            color_eye = color_eye_M;
        }
        else{
            color_eye = color_eye_F;
        }
        switch(color_eye){
            case 1:
            color_eye_2 = "Green";
            break;
            case 2:
            color_eye_2 = "Blue";
            break;
            case 3:
            color_eye_2 = "Brown";
            break;
            case 4:
            color_eye_2 = "Black";
            break;
        }
        cout<<"Yey color(1.Green , 2.Blue , 3.Brown , 4.Black) is between mother and father But it probably is: "<<color_eye_2<<endl;
        if(Gender=="boy" || Gender == "BOY"){
            height = (height_F + height_M + 13)/2;
        }
        if(Gender == "girl" || Gender == "GIRL"){
            height = (height_F + height_M - 13)/2;
        }
        cout<<"height is "<<height<<" cm"<<endl;


    }
};
int main(){
    cout<<"\t---------------------------------------------------\n";
    cout<<"\t***** Heredity (estimating a child's talents) *****\n";
    cout<<"\t---------------------------------------------------\n";
    cout<<"NOTE:\n";
    cout<<"1.Dominant traits such as (black hair color, brown eye color) are usually more common.\n";
    cout<<"2.Environmental factors (nutrition, upbringing, health) play an important role in height, weight, and intelligence.\n";
    cout<<"3.Genetic diseases are passed on from parent to child depending on the type of inheritance.\n";
    cout<<"____________________________________________________________________________________________________________________\n";
    child c;
    c.get_data();
    c.output_data();















    return 0;
}