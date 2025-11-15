#include <iostream>
using namespace std;
class Base
{
    private:
    int i;
    public:
    void set_i(int x) { i= x;}
    int get_i() { return i;}
};

class Derived1: private Base{
    private:
    int j;
    public:
    void set_j(int y) { j = y;}
    int get_j() { return j;}
    Base::set_i;
    Base::get_i;
    void show()
    {
        cout<<this->get_i()<<" "<<j<<endl;
    }
};

int main()
{
    Derived1 ob;
    ob.set_i(1);
    ob.set_j(2);
    ob.show();
    return 0;
}