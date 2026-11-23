#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    float marks;

    public:
    student(int r,string n,float m)
    {
        rollno = r;
        name = n;
        setMarks(m);
    }

    void setMarks(float m)
    {
        if (m>=0 && m<=100)
        {
            marks = m;
        }
        else
        {
            cout<<"invalid marks"<<endl;
            marks = 0;
        }
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

    void display(){
        cout<<"Roll No :"<<rollno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
    }
};

void showStudent(student s){
    s.display();
}

int main()
{
student students[3] = {
    student(101, "Asha" ,82),
    student(102, "Anu" ,35),
    student(103, "Arjun" ,105)
};

for(int i=0;i<3;i++){
    showStudent(students[i]);
}

return 0;
}