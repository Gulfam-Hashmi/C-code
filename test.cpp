#include<iostream>
#include<string>

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

class Student
{
    private:
        string rollNo;
        string name;
        float creditHours;
        Course courses[3];
    public:
        string getRollNo()
        {
            return rollNo;
        }
        
        void setRollNo(string _rollNo)
        {
            rollNo = _rollNo;
        }
        
        string getName()
        {
            return name;
        }
        
        void setName(string _name)
        {
            name = _name;
        }
        
        float getCreditHours()
        {
            return creditHours;
        }
        
        void setCreditHours(float _crHrs)
        {
            creditHours = _crHrs;
        }

        Course* getCourses()
        {
            return courses;
        }
        
        void setCourses(Course _courses[])
        {
            for (int i = 0; i < 3; ++i)
            {
                courses[i] = _courses[i];
            }
        }
};

int main()
{
    Student student;
    
    // Input student data
    string rollNo, name;
    float creditHours;
    
    cout << "Enter student roll number: ";
    getline(cin, rollNo);
    student.setRollNo(rollNo);
    
    cout << "Enter student name: ";
    getline(cin, name);
    student.setName(name);
    
    cout << "Enter total credit hours: ";
    cin >> creditHours;
    student.setCreditHours(creditHours);
    
    // Input courses data
    Course courses[3];
    for (int i = 0; i < 3; ++i)
    {
        string code, title;
        float crHrs;
        
        cout << "Enter code for course " << (i + 1) << ": ";
        cin >> code;
        courses[i].setCode(code);
        
        cout << "Enter title for course " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, title);
        courses[i].setTitle(title);
        
        cout << "Enter credit hours for course " << (i + 1) << ": ";
        cin >> crHrs;
        courses[i].setCreditHours(crHrs);
    }
    student.setCourses(courses);
    
    // Display student data
    cout << "\nDetails of Student\n";
    cout << "Roll Number: " << student.getRollNo() << endl;
    cout << "Name       : " << student.getName() << endl;
    cout << "Credit Hours: " << student.getCreditHours() << endl;
    
    // Display courses data
    cout << "\nCourses:\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "Course " << (i + 1) << ":\n";
        cout << "  Code   : " << student.getCourses()[i].getCode() << endl;
        cout << "  Title  : " << student.getCourses()[i].getTitle() << endl;
        cout << "  Credits: " << student.getCourses()[i].getCreditHours() << endl;
    }
    
    return 0;
}
