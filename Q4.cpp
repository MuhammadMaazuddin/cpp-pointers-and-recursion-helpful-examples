#include<iostream>
using namespace std;
int Count(int num1, int divide, int num2, int sum, int move)
{
    
    if(move < 2)
    {
    int mode = 0;
    int Divide = 0;
    Divide = num1/divide;
    mode=Divide%10;
    if(mode == num2)
    {
        sum++;
    }

        Count(num1, divide*10, num2, sum, move +1);
    
    
    }
    
    else
        {
                    return sum;

        }

    


}
int CountDigit(int num1, int num2)
{

int sum = 0;

    if(num2>=num1)
    {
        if(num2 >=0 && num2<=9)
        {
        cout<<num2<<"   ";
        sum = Count(num2, 1, num1, 0, 0);
        cout<<" --> "<<sum<<" times\n";
        }
        else if(num2>9)
        {
        cout<<num2<<"  ";
        sum = Count(num2, 1,  num1, 0, 0);
        cout<<" --> "<<sum<<" times\n";
        }
        
        
        sum += CountDigit(num1,num2-1);
        //cout<<endl;

    }
    
return sum;

}
int main()
{
    int num1, num2, sum=0;

    cout<<"Enter number you want to count  ::  ";
    cin>>num1;

    cout<<"Enter the limit::  ";
    cin>>num2;

    sum += CountDigit(num1, num2);
    cout<<"Totat number of "<<num1<<" is "<<sum<<endl;

return 0;
}