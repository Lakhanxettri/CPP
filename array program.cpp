#include<iostream>
using namespace std;
class employee{
    private:
    char name[20];
    int age;
    float salary;
    public:
    void getdata(void);
    void putdata(void);
};
void employeee::getdata(void);{
cout<<"enter name:";
cin>>name;
cout<<"enter salary:";
cin>>salary;
cout>>"enter age:";
cin>>age;
}
void emplpoyee::putdata(void);{
    cout<<"name:"<<name;
    cout<<"salary:"<<salary;
    cout<<"age:"<<age;
}