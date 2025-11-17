#include<iostream>
#include<string>
#include<array>

using namespace std;

class Course
{
    private:
        string code;
        string title;
        float creditHours;
    public:
        string getCode()
        {
            return code;
        }
        
        void setCode(string _code)
        {
            code = _code;
        }
        
        string getTitle()
        {
            return title;
        }
        
        void setTitle(string _title)
        {
            title = _title;
        }
        
        float getCreditHours()
        {
            return creditHours;
        }
        
        void setCreditHours(float _crHrs)
        {
            creditHours = _crHrs;
        }
        
};

int maint1()
{
    array<Course,4>pf;
	for(int i=0;i<4;i++)
	{
		string coursecode;
		string title;
		int credithours=0;
		cout<<"Enter the code of Courseno "<<i+1<<": ";
		cin>>coursecode;
		cout<<"Enter the Title of Courseno "<<i+1<<": ";
		cin>>title;
		cout<<"Enter the CREDIT HOURS of Courseno "<<i+1<<": ";
		cin>>credithours;
		
		pf[i].setCode(coursecode);
		pf[i].setTitle(title);
		pf[i].setCreditHours(credithours);
		
	}

    for(int i=0;i<4;i++)
	{
	cout<<"                For Course"<<i+1<<endl;	
    cout << "Details of PF are" << endl;
    cout << "Code   : " << pf[i].getCode() << endl;
    cout << "Title  : " << pf[i].getTitle() << endl;
    cout << "Credits: " << pf[i].getCreditHours() << endl;
	}
	return 0;
}

int main()
{
	Course *pf = new Course[4];
	for(int i=0;i<4;i++)
	{
		string coursecode;
		string title;
		int credithours=0;
		cout<<"Enter the code of Courseno "<<i+1<<": ";
		cin>>coursecode;
		cout<<"Enter the Title of Courseno "<<i+1<<": ";
		cin>>title;
		cout<<"Enter the CREDIT HOURS of Courseno "<<i+1<<": ";
		cin>>credithours;
		
		pf[i].setCode(coursecode);
		pf[i].setTitle(title);
		pf[i].setCreditHours(credithours);
		
	}

    for(int i=0;i<4;i++)
	{
	cout<<"                For Course"<<i+1<<endl;	
    cout << "Details of PF are" << endl;
    cout << "Code   : " << pf[i].getCode() << endl;
    cout << "Title  : " << pf[i].getTitle() << endl;
    cout << "Credits: " << pf[i].getCreditHours() << endl;
	}
    
	return 0;
	
	
	return 0;
}
	