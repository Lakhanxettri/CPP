class area{
    private:
    int length;
    int breadth;
public:
area( ):length(5),breadth(10){}
area(int l,int b):length(l),breadth(b){}
int areacalculation( ){
return(length*breadth);
}
voiddisplay area(int temp){
    cout<<"area:"<<temp<<endl;
}
};
int main( )
{
    area a1,area a2(10,5);
    int temp;
    cout<<"default area with no argument is passed:"<<endl;
    temp=a1.areacalculation( );
    cout<<"area when two arguement is passed:"<<endl;
    temo=a2.areacalculation( );
    return 0;
}