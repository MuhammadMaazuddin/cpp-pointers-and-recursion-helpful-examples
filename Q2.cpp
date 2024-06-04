#include<iostream>
using namespace std;
void DisplayPattern(int num, int StartingPoint, char character)
{
    if(num < StartingPoint)
    {
        cout<<character;
        DisplayPattern(num+1, StartingPoint, character);
    }
    else
    {
        cout<<"";
    }
}
void Pattern(int StartingPoint, int EndingPoint, char Character1, char Character2, int StartingPoint1, int StartingPoint2 )
{
if(StartingPoint <= EndingPoint )
{


    if(StartingPoint % 2 == 0)
    {
        cout<<StartingPoint;
        DisplayPattern(0, StartingPoint, Character1);
    }
    else if(StartingPoint % 2 != 0)
    {
        cout<<StartingPoint;
        DisplayPattern(0, StartingPoint, Character2);
    }    
    StartingPoint1 = StartingPoint-1;

    Pattern(StartingPoint+1, EndingPoint, Character1, Character2, StartingPoint1, StartingPoint2);
    
   
}
else if(StartingPoint>EndingPoint)
{

if(StartingPoint1  >= StartingPoint2 )
{
    if(StartingPoint1 % 2 == 0)
    {
        cout<<StartingPoint1;
        DisplayPattern(0, StartingPoint1, Character1);
    }
    else if(StartingPoint1 % 2 != 0)
    {
        cout<<StartingPoint1;
        DisplayPattern(0, StartingPoint1, Character2);
    }
    
           Pattern(StartingPoint , EndingPoint, Character1, Character2, StartingPoint1-1, StartingPoint2);


}  
else
{
    cout<<endl;
}   
}
 
}
int main()
{
    int StartingPoint, EndingPoint;
    char Character_1, Character_2;

    cout<<"Enter the starting point  ::  ";
    cin>>StartingPoint;

    cout<<"Enter the ending point  ::  ";
    cin>>EndingPoint;

    cout<<"Enter the character1  :: ";
    cin>>Character_1;

    cout<<"Enter the character2  :: ";
    cin>>Character_2;

    Pattern(StartingPoint, EndingPoint, Character_1, Character_2, StartingPoint, StartingPoint);

return 0;

}