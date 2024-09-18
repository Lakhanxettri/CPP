#include<iostream>
using namespace std;
class animal:
{
    void animal sound( )
    {
        cout<<"animal sound";
    }
};
class cat:public animal{
    void animal sound{
        cout<<"cats meow"
    }
};
class dog:public animal{
    void animal sound{
        cout<<"dogs barks";
    }
};
int main( )
{
    animal a1;
    a1.animal sound( )
    cout<<endl;
    cat c1;
    c1.animal sound( )
    cout<<endl;
    d1.animal sound( )
}
