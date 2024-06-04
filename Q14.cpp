#include<iostream>
using namespace std;
long Factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    return n*Factorial(n-1);

}
long permute(int n, int r)
{
    return Factorial(n)/Factorial(n-r);

}
int main()
{





    int C = 0, R = 0, result = 0;
    cout<<"The formula for permutation is cPr  \n";
    cout<<"Enter the c   ::   ";
    cin>>C;
    cout<<"Enter the r   ::   ";
    cin>>R;
    result = permute(C,R);
    cout<<"The permutation  ::  "<<C<<"P"<<R<<" is   ::  "<<result<<endl;




return 0;

}