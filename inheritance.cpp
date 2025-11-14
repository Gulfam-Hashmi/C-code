#include <iostream>
 using namespace std;
 //in this case the class was publicliicaly inherited
 class base {
protected: int i, j; //due to protected it is now private to base but can be used by derived class
 public:
 base() { i =0;j = 0;}
 void set(int a, int b) { i=a; j=b; }
 void show() { cout << i << " " << j << "\n"; }
 };
 class derived : public base {
 int k;
 public:
 derived() { k=i*j; }
 void showk() { cout << k << "\n"; }
 };

int main()
 {
 derived ob;
 ob.set(1, 2); // access member of base
 ob.show(); // access member of base
 ob.showk(); // uses member of derived class
 return 0;
 }