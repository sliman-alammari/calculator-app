#include<iostream>
using namespace std;
 
void Multiply(int a, int b)
{
    cout << a * b << endl;
}

void Division(int a, int b)
{
    cout << a / b << endl;
}

void SumNumbers(int a,int b)
{

    cout<<a+b<<endl;

}
void Subtract(int a, int b)
{
    cout << a - b << endl;
}

void Reminder(int a, int b)
{
    cout << a % b << endl;
}

int main()
{

    int a,b;
    cout<<"\nPlease enter a : ";
    cin>>a;
    cout<<"\nPlease enter b : ";
    cin>>b;
    char Operation;
    cout<<"\nPlease enter operation : ";
    cin>>Operation;
    switch (Operation)
    {

    case '+':
    {
      SumNumbers(a,b);
    }
    break;

    case '-':
    {
        Subtract(a, b);
    }break;

    case '*':
    {
        Multiply(a, b);
    }
        break;
    case '/':
    {
        Division(a, b);
    }
    
    case '%':
    {
        Reminder(a, b);
    }
    
    break;
    default:
        break;
    }

}