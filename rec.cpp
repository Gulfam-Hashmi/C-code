#include <iostream>
using namespace std;
int f(int n)
{
    // int factorial = 1;
    // for(int i =1;i<=n;i++)
    // {
    //     factorial *= i;
    // }
    // cout<<factorial;
    if(n ==0)
    {
        return 0;
    }else{
        return n+f(n-1);
    }
}

int main()
{
    cout<<f(5);
    return 0;
}