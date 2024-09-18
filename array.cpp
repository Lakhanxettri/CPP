#include<iostream>
using namespace std;
class employee{ 
    private:
    char name[30];
    float salary;
    int age;
    public:
    void getdata(void);
    void putdata(void);
};
void employeee::getdata(void){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter salary:";
    cin>>salary;
    cout<<"enter age:";
    cin>>age;
}
void employee::putdata(void){
    cout<<"name:"<<name;
    cout<<"salary:"<<salary;
    cout<<"age:"<<age;
}
int main( ){
    int i;
    employee[5];
    for(i=0;i<5;i++){
        cout<<"details of employee"<<i+1;
        employee[i].getdata( );
    }
for(i=0;i<5;i++){
    cout<<"employee"<<i+1;
    manager[i].putdata( );
    }
    return 0;
}int main( ){
    int i;
    employee[5];
    for(i=0;i<5;i++){
        cout<<"details of employee"<<i+1;
        employee[i].getdata( );
    }
for(i=0;i<5;i++){
    cout<<"employee"<<i+1;
    manager[i].putdata( );
    }