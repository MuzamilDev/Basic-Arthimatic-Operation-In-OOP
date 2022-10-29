#include<iostream>
using namespace std;

class Mathematics{
private:
    int a , b , sum , subtraction , product;
    float qoutient;
public:
    void getdata(){
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second Number "<<endl;
    cin>>b;
    }

    void add()
    {
        sum=a+b;
    }

    void subtract()
    {
        subtraction=a-b;
    }

    void multi()
    {
        product=a*b;
    }

    void division()
    {
        qoutient=a/b;
    }
    void print(){
    cout<<"The addition is "<<sum<<endl;
    cout<<"The Subtraction is "<<subtraction<<endl;
    cout<<"The Multiplication is "<<product<<endl;
    cout<<"The Division of number is "<<qoutient<<endl;
    }
};
int main()
{
    Mathematics obj;
    obj.getdata();
    obj.add();
    obj.subtract();
    obj.multi();
    obj.division();
    obj.print();

    return 0;
}
