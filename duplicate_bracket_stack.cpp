#include "stack.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string eliminate(string b)
{
    Stack<char> s(b.length());
    for(int i=0; i<b.length();i++)
    {
        if(!s.isEmpty() && b[i] == ')' && s.peek() == '(')
        {
            s.pop();
        }
        else{
            s.push(b[i]);
        }
    }
    string tmp = "";
    while(!s.isEmpty())
    {
        tmp += s.pop();
    }
    //reverse(tmp.begin(),tmp.end());
    return tmp;

}
int main()
{
    string brackets = "((())(()))";
    int size = brackets.length();
    cout<<eliminate(brackets);
    return 0;
}