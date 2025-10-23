#include "stack.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> duplicate_stack(vector<int> v)
{
    Stack<int> s(8);
    //this will input the valid elements in the stack
    for(int n: v)
    {
        if(!s.isEmpty() && n == s.peek())
        {  
            s.pop();
        }else
        {
            s.push(n);
        }
    }
    //to put the stack elements back to teh vector
    vector<int> n;
    while(!s.isEmpty())
    {
        n.push_back(s.pop());
    }
    //i have to reverse the vector because it will help us to get the exact sequence of the elements we get
    reverse(n.begin(),n.end());
    return n;
}
void display(vector<int> v)
{
    if(v.size() == 0)
    {
        cout<< "[]";
    }
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}
int main()
{
    vector<int> x = {1,2,2,3,3,4,5,5};
    vector<int> n =duplicate_stack(x);
    display(n);
    return 0;
}
