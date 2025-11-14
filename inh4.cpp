 #include <iostream>
 using namespace std;
 class base1 {
 protected:
 int i;
 public:
 base1(int x) { i=x; cout << "Constructing base1\n"; }
 ~base1() { cout << "Destructing base1\n"; }
 };
 class base2: public base1 {
 protected:
 int k;
 public:
 base2(int x, int y): base1(x){ k=y; cout << "Constructing base2\n"; }
 ~base2() { cout << "Destructing base1\n"; }
 void show()
 {
	 cout<<i<<" "<<k<<endl;
 }
 };
class derived:public base2 {
 int j;
 public:
 //derived(int x, int y, int z): base2(y, z)
 derived(int x):base2(0,0){ j=x; cout << "Constructing derived\n"; }
 ~derived() { cout << "Destructing derived\n"; }
 //void show() { cout << i << " " << j << " " << k << "\n"; }
 void show() { cout << j <<  "\n"; }
 };
 int main()
 {
 derived ob(3);
 base2 ob1(4,5);
 ob.show(); // displays 4 3 5
 ob1.show();
 return 0;
 }