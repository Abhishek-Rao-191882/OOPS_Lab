#include<iostream>
using namespace std;
const int MAX=30;

class STRING{
private:
    char A[MAX];
public:
    STRING(){
        //default constructor
    }
    // function to store string
    void getString(){
        cout<<"Enter a String to store: ";
        cin.getline(A,MAX);
    }
    // function to display string
    void displayString(){
        cout<<"stored string is: "<<A<<endl;
    }
    // function to get the length of the string
    int length(){
        int i=0;
        for(i=0;A[i]!='\0';i++);
        return i;
    }
    // function to equate the string
    bool equateString(STRING &B){
        int i=0;
        for(i=0;A[i]!='\0';i++){
            if(B.A[i]!=A[i]){
                return false;
            }
        }
        return true;
    }
    // function to add the string
    void addString(STRING &B){
        STRING temp;
        int i=0;
        cout<<"Concatenated string is: ";
        for(i=0;A[i]!='\0';i++){
            temp.A[i]=A[i];
            cout<<temp.A[i];
        }
        for(int j=0;j<B.length();j++){
            temp.A[j]=B.A[j];
            cout<<temp.A[j];
        }
    }

};

int main(){
    STRING string1,string2;

    cout<<"***********************"<<endl;
    //storing first string
    string1.getString();
    string1.displayString();

    cout<<"---------------------"<<endl;
    //storing second string
    string2.getString();
    string2.displayString();

    cout<<"---------------------"<<endl;
    //comparing string
    if(string1.equateString(string2)){
        cout<<"Given strings are equal !!"<<endl;
    }else{
        cout<<"Given strings are not equal !!"<<endl;
    }

    cout<<"---------------------"<<endl;
    //Adding string
    string1.addString(string2);
    cout<<endl;

    return 0;
}
