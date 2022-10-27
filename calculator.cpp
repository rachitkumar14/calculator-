#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    switch(op)
    {
        case '+':
        {
            cout<<"The result of the addition is :"<<a+b<<endl;
            break;
        }
        case '-':
        {
            cout<<"the result of the subtraction is :"<<a-b<<endl;
            break;
        }
        case '*':
        {
            cout<<"the result of the multiplication is :"<<a*b<<endl;
            break;
        }
        case '/':
        {
            cout<<"the result of the dividation is :"<<a/b<<endl;
            break;
        }
        default:
        {
            cout<<"u do the mistake somewhere"<<endl;
        }
    }
    cout<<"Thankyou"<<endl;
    return 0;
}