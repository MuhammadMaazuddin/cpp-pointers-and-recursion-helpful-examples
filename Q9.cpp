#include<iostream>
using namespace std;
void DisplaySpaces(int value, int num)
{
    if(num<=value)
    {
        if(num<value)
        {
        cout<<"  ";
        DisplaySpaces(value,num+1);
        }
        else
        {
            cout<<" ";
        }
        

    }
}
void DisplayCharacter(int value, int num, char ch,int num1)
{

    if(num<=value)
    {
        DisplaySpaces(value-(num), 0);
        cout<<ch;
        DisplaySpaces(num, 0);
        cout<<" "<<ch<<endl;
        DisplayCharacter(value, num+1,ch, num1);
        if(num == value)
{
            DisplayCharacter(value, (2*num), ch, num1);
        }
    }
    else if(num1 <= num)
    {
        cout<<ch<<" ";
        DisplayCharacter(value, num, ch, num1+1); 
    }






}

void PrintPattern(int value, char ch)
{
    DisplaySpaces(value,0);
    cout<<" "<<ch<<endl;
    DisplayCharacter(value-1, 0, ch, value);
    cout<<ch<<" "<<ch<<endl;
    cout<<endl;
    
}
int main()
{
    int number = 0;
    char alpha ;
    cout<<"Enetr the number for right trinangle  ::  ";
    cin>>number;
    cout<<"Enter the charater for displaying tringle  ::  ";
    cin>>alpha;
    PrintPattern(number,alpha);



return 0;
}