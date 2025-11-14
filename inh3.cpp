//constructor functions are executed in their order of derivation. Destructor
 //functions are executed in reverse order of derivation.
#include <iostream>
 using namespace std;
 class base {
 public:
 base() { cout << "Constructing base\n"; }
 ~base() { cout << "Destructing base\n"; }
 };
 class derived1: public base {
 public:
 derived1() { cout << "Constructing derived1\n"; }
 ~derived1() { cout << "Destructing derived1\n"; }
 };
 class derived2: public derived1 {
 public:
 derived2() { cout << "Constructing derived2\n"; }
 ~derived2() { cout << "Destructing derived2\n"; }
 };
 int main()
 {
 //derived1 ob1;
 derived2 ob2;
 // do nothing but construct and destruct ob
 return 0;
 }
 //Output
/*Constructing base
Constructing derived1
Constructing derived2
Destructing derived2
Destructing derived1
Destructing base
*/

//well we can say that in this case it base = base1 and derived1 = base2