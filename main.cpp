#include<iostream>
using namespace std;
 
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
    
    default:
        break;
    }

}