#include<iostream>
using namespace std;

class Employee  //a class with name dpartment scale with just default constructor, getters setters and show fucntion
{
    protected:
    string name;
    string department;
    int scale;
    public:
    Employee(): name("dummy") , department("XYZ"), scale(0) {}
    void set_name(string n){ name = n;}
    void set_department(string d) { department = d;}
    void set_scale(int s) {  scale = s;}

    string get_name() {return name;}
    string get_department() { return department;}
    int get_scale() { return scale;}

    // void showe()
    // {
    //     cout<<"Name: "<<this->get_name()<<endl;
    //     cout<<"Department: "<<this->get_department()<<endl;
    //     cout<<"Scale: "<<this->get_scale()<<endl;
    // }
};

class Officer: public Employee
{
    private:
    int monthly_salary;
    public:
    void set_monthlysalary(int s) {take_home_income(s);}
    int get_monthlysalary() {return monthly_salary;}
    void showo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Scale: "<<scale<<endl;
        cout<<"Monthly salary: "<< this->get_monthlysalary()<<endl;
    }
    float take_home_income(float m)
    {
        monthly_salary = m*0.90;
        return monthly_salary;
    }
};
class Wager: public Employee
{
    private:
    float daily_wage;
    int absent_count;
    public:
    void set_dailywage(float d) { daily_wage = d;}
    void set_absentcount(int a) { absent_count = a;}

    float get_dailywage() { return daily_wage;}
    int get_absentcount() { return absent_count;}

    void showw()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Scale: "<<scale<<endl;
        cout<<"DailyWage: "<<this->daily_wage<<endl;
        cout<<"Home Monthly: "<<take_home_income(daily_wage, absent_count)<<endl;
    }
    float take_home_income(float w, int a )
    {
        int days = 30 - a;
        float x = w * days;
        return x;
    }
};

int main()
{
    Wager w;
    w.set_name("Gulfam"); w.set_department("Daily Wager"); w.set_absentcount(1);w.set_dailywage(1000);
    Officer o;
    o.set_name("Gulfam Hashmi"); o.set_department("Date science");o.set_scale(18), o.set_monthlysalary(100000);
    w.showw();
    o.showo();
    cout<<"----Hello----"<<endl;
    return 0;
}