#include<iostream>
using namespace std;
 
void Multiply(int a, int b)
{
    cout << a * b << endl;
}


void SumNumbers(int a,int b)
{

    cout<<a+b<<endl;

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
    case '*':
    {
        Multiply(a, b);
    }
        break;
    
    default:
        break;
    }

}