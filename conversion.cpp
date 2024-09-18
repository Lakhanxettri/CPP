#include<iostream>
using namespace std;
class meter
{
    private:
    float lenght;
    public:
    void metre()
    {
        lenght = 0.0;
    }
    void centi(float l)
    {
    lenght = 1/100.0;
    }
    void showlength()
    {
        cout<<"lenght conversion:"<<lenght;
    }
};
int main( )
{
    meter m1;
    m1.centi(1000.0);
    m1.showlength();
    
    return 0;
}
