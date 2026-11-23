#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    float marks;

    public:
    student(int r,string n,float m){
        rollno = r;
        name = n;
        setMarks(m);
    }

    int getRollno(){
        return rollno;
    }

    string getName(){
        return name;
    }

    float getMarks(){
        return marks;
    }

    void setMarks(float m){
        if (m>=0 && m<=100){
            marks = m;
        }
        else{
            cout<<"invalid marks for "<<name<<",set to 0"<<endl;
            marks = 0;
        }
    }

    void display(){
        cout<<rollno<<"|"<<name<<"|"<<marks<<endl;
    }
};

void printResult(student s){
    cout<<s.getRollno()<<":";
    if(s.getMarks()>=40){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}
int main(){
    student batch[3] = {
        student(101, "Asha" ,82),
        student(102, "Anu" ,35),
        student(103, "Arjun" ,105)
    };

    for(int i=0;i<3;i++){
        batch[i].display();
    }

    batch[1].setMarks(45);

    for(int i=0;i<3;i++){
        printResult(batch[i]);
    }
    return 0;
}
