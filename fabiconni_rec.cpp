#include <iostream>
using namespace std;
void fabiconni(int n)
{
    int a =0; int b =1;
    int buck = 0;
    cout<<a<<endl<<b<<endl;
    while(n >= buck)
    {
        buck = a+b;
        cout<<buck<<endl;
        a = b;
        b = buck;
    }
}
int main()
{
    fabiconni(10);
    return 0;
}