#include<iostream>
using namespace std;

class TIME{
private:
    int hh, mm;
public:
    TIME(){
    this->hh=0;
    this->mm=0;
    }
    TIME(int hh,int mm){
        this->hh=hh;
        this->mm=mm;
    }
    void setTime(int hh, int mm ){
        this->hh=hh;
        this->mm=mm;
    }
    int getTime(){
        return this->hh, this->mm ;
    }
    friend void addTime(TIME t1, TIME t2);

    void display(){
        cout<<"The time is (HH:MM) = "<<this->hh<<":"<<this->mm<< " or "<<this->hh<<" hours and "<<this->mm<<" minutes. "<<"\n";
    }
};

 void addTime(TIME t1,TIME t2){
     TIME temp;
     temp.hh=t1.hh+t2.hh;
     temp.mm=t1.mm+t2.mm;
     if(temp.mm >= 60){
                temp.hh += temp.mm / 60;
                temp.mm = temp.mm % 60;
            }
     cout<<"New time value after addition is (HH:MM) = "<<temp.hh<<":"<<temp.mm<<" or "<<temp.hh<<" hours and "<<temp.mm<<" minutes. "<<endl;
 }

int main(){
    TIME t1(2,55);
    cout<< "First time object value is:"<<endl;
    t1.display();
    cout<<endl;
    TIME t2(4,43);
    cout<< "Second time object value is:"<<endl;
    t2.display();
    cout<<endl;
    cout<< "Time value after adding first and second time object is:"<<endl;
    addTime(t1,t2);
    return 0;
}
