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
        string getCode()  //get and set for code
        {
            return code;
        }
        
        void setCode(string _code)
        {
            code = _code;
        }
        
        string getTitle()   //get and set for Title
        {
            return title;
        }
        
        void setTitle(string _title)
        {
            title = _title;
        }
        
        float getCreditHours()    //get and set for credithours
        {
            return creditHours;
        }
        
        void setCreditHours(float _crHrs)
        {
            creditHours = _crHrs;
        }
        
};

class Student
{
	private:
	string rollno;
	string name;
	float credithours;
	Course data[3];
	
	public:
	string getrollNo() //get and set for rollno
	{
		return rollno;
	}
	void setrollNo(string _rollno)
	{
		rollno = _rollno;
	}
	string getName() //get and set for name
	{
		return name;
	}
	void setName(string _name)
	{
		name = _name;
	}
	float getcreditHours() //get and set for credit hours
	{
		return credithours;
	}
	void setcreditHours(float _CH)
	{
		credithours = _CH;
	}
	//getter and setter for data arrray
	Course getData(int i)
	{
		return data[i];
	}
	void setData(Course _data, int i)
	{
		data[i] = _data;
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

int main2()
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
} 

int main()
{
	Student me;
	string name,rollno;
	float c_hours;  //hours will be the total in the semester
	
	cout<<"Enter the name of the student: ";               //input the data
	getline(cin,name);
	cout<<"Enter the roll no of the student: ";
	getline(cin,rollno);
	cout<<"Enter the credit hours of semester: ";
	cin>>c_hours;
	
	me.setName(name);
	me.setrollNo(rollno);
	me.setcreditHours(c_hours);
	
	
	
	cout<<"Now you need to add the data for the course student is taking"<<endl;
	for(int i=0;i<3;i++)
	{
		Course info;
		string coursecode;
		string title;
		int credithours=0;
		cout<<"Enter the code of Courseno "<<i+1<<": ";
		cin>>coursecode;
		cout<<"Enter the Title of Courseno "<<i+1<<": ";
		cin>>title;
		cout<<"Enter the TotalCREDIT HOURS of Courseno "<<i+1<<": ";
		cin>>credithours;
		
		info.setCode(coursecode);
		info.setTitle(title);
		info.setCreditHours(credithours);
		
		me.setData(info,i);   
	}
	
	//ALL OUTPUT PORTION
	cout<<"Name: "<<me.getName()<<endl;
	cout<<"RollNo: "<<me.getrollNo()<<endl;
	cout<<"Credit Hourse: "<<me.getcreditHours()<<endl;
	 for(int i=0;i<3;i++)
	{
		Course info;
		info = me.getData(i);
	cout<<"                For Course"<<i+1<<endl;	
    cout << "Details of Courses are" << endl;
    cout << "Code   : " << info.getCode()<<endl;
    cout << "Title  : " << info.getTitle() << endl;
    cout << "Credits: " << info.getCreditHours() << endl;
	}
	return 0;
}	