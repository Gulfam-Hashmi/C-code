#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Member
{
    private:
    string name;
    public:
    Member(string n) : name(n) {}
    string getName() const { return name; }
    void setName(const string& n) { name = n; }
    ~Member() { cout << "Member " << name << " destroyed." << endl; }
};
class Account
{
    private:
    long id;
    public:
    Account(long i) : id(i) {}
    long getId() const { return id; }   
    void setId(long i) { id = i; }
    ~Account() { cout << "Account " << id << " destroyed." << endl; }
};
class Bank
{
    private:
    string bank;
    vector<Member*> members;
    vector<Account*> accounts;
    public:
    Bank(string b) : bank(b) {}
    void addMember(Member m) { members.emplace_back(m); }
    void addAccount(long id) { accounts.emplace_back(new long(id));}
};
int main()
{
    return 0;
}