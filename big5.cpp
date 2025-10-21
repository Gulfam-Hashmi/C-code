#include<iostream>
#include<array>
using namespace std;
class Num
{
    private:
    int* num;
    public:
    Num(): num(nullptr) {}  //Default
    Num(int n): num(&n) { cout<<"Parameterized constructor called"<<endl;}    //Parameterized Constructor
    Num(const Num& a)  // copy constructor
    {
        cout<<"Copy constructor called"<<endl;
        num = new int;
        *num = *a.num; 
    }
    Num& operator=(const Num& a)
    {
        cout<<"Copy assignment is called"<<endl;
        if(&a == this)
        {
            return *this;
        }
        delete &num;
        num = new int;
        *num = *a.num;
        return *this;
    }
    int get()
    {
        return *num;
    }
    void set(int n)
    {
        cout<<"Setter called"<<endl;
        num = &n;
    }
    void display()
    {
        cout<<*num<<endl;
    }
};
int main()
{
    Num n1(10); 
    Num n2 = 9;
    n2.display();
    Num n3 = n1;
    n3.display();
    n2 = n3;
    n2.display();
    return 0;
}