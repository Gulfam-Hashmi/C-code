#include <iostream>
using namespace std;
class Employee
{
    private:
    string name; int scale;
    public:
    Employee(): name(" ") , scale(0) {cout<<"Employee is created"<<endl;}
    Employee(string n, int s): name(n), scale(s) {}
    ~Employee() { cout<<"Employee is destroyed"<<endl; }
    void show_employee() { cout<<"Name: "<<this->name<<"scale: "<<this->scale<<endl;}
};
class Company
{
    private:
    string Cname = "Gulfam_Technology" ;
    Employee *E;
    public:
    //Company(): Cname("Gulfam_Technology"), E(nullptr) {cout<<"Company is created"<<endl;}
    Company(Employee *e){ this->E=e;}
    ~Company() {cout<<"Company is destroyed"<<endl;}
    void show_compnay() { cout<<"Company: "<<Cname<<endl; E->show_employee(); cout<<endl;}
};

int main()
{
    Employee *e= new Employee("Sana", 50000);   //we can also solve it differently.. we dont need to allocate it dynamically we can it in the simple way
    e->show_employee();
    Company c(e);
    c.show_compnay();
    e->show_employee();   //as it is made on heap so it will not be destroyed but if we do it on stack it will destroy at the end 
    return 0;             //but is still aggregated becasue it will give us the show output even after the company is destroyed.....
}
