#include<iostream>
using namespace std;
void DisplayLines(int num1, int num)
{
    if(num1<num)
    {
        cout<<"|";
        DisplayLines(num1+1, num);
    }
}
void DisplaySpaces( int num, int num1)
{
    if(num1<=num)
    {
        cout<<" ";
        DisplaySpaces(num, num1+1);
    }
}
void DisplaySteric(int num , int num1)
{
    if(num1<num)
    {
        
        cout<<"* ";
        DisplaySteric(num, num1+1);
    }
    
}
void DisplayPatter(int num1, int num2, int num3, int num4, int num5)
{
    if(num4<num1)
    {
        if(num4 == 0)
        {
            DisplaySpaces((num1*2)-(num4*2), 0);
            cout<<"|";
            DisplaySpaces((num1*2)-(num4*2), 0);
            DisplayLines(0,num2);
            DisplaySpaces((num1*2)-(num4*2), 0);
            cout<<"|";
            cout<<endl;

        }
        else
        {
            DisplaySpaces((num1*2)-(num4*2), 0);
            cout<<"|";
            DisplaySpaces((num1*2)-(num4*2), 0);
            DisplaySteric(((2*num1)-((num1*2)-(num4*2))),0);
            DisplayLines(0,num2);
            cout<<" ";
            DisplaySteric(((2*num1)-((num1*2)-(num4*2))),0);
            DisplaySpaces((num1*2)-(num4*2), 0);
            cout<<"|";
            cout<<endl;
        }

DisplayPatter(num1, num2, num3, num4+1, num5);
        

    }
    else if(num5>=0)
    {
        if(num5 == 0)
        {
            DisplaySpaces((num1*2)-(num5*2), 0);
            cout<<"|";
            DisplaySpaces((num1*2)-(num5*2), 0);
            DisplayLines(0,num2);
            DisplaySpaces((num1*2)-(num5*2), 0);
            cout<<"|";
            cout<<endl;

        }
        else
        {
            DisplaySpaces((num1*2)-(num5*2), 0);
            cout<<"|";
            DisplaySpaces((num1*2)-(num5*2), 0);
            DisplaySteric(((2*num1)-((num1*2)-(num5*2))),0);
            DisplayLines(0,num2);
            cout<<" ";
            DisplaySteric(((2*num1)-((num1*2)-(num5*2))),0);
            DisplaySpaces((num1*2)-(num5*2), 0);
            cout<<"|";
            cout<<endl;
        }

DisplayPatter(num1, num2, num3, num4+1, num5-1);
        

    }



}
void PrintPattern(int num1, int num2 ,int num3)
{
   DisplayPatter(num1, num2, num3, 0, num1);
}
int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    cout<<"Enter the num1  ::  ";
    cin>>num1;
    cout<<"Enter the num2  ::  ";
    cin>>num2;
    cout<<"Enter the num3  ::  ";
    cin>>num3;
    PrintPattern(num1, num2, num3);



return 0;
}