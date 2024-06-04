#include<iostream>
using namespace std;
int SearchDigit(int Number, int DigitSearch, int DigitPosition, int mode, int move)
{

    DigitPosition = Number;
    DigitPosition = DigitPosition%10000000000;
    DigitPosition = DigitPosition/1000000000;

if(DigitPosition == 0)
    {
    if(mode <= 100000000)
        {
            DigitPosition = Number/mode;
            DigitPosition = DigitPosition%10;
        if(move<=9)
            {
                if(DigitPosition == DigitSearch)
                {
                    return move;
                }
                else if(DigitPosition != DigitSearch)
                {
                    SearchDigit(Number, DigitSearch, DigitPosition, mode*10, move+1);
                }
               
            }
        }
    }
    else
    {
        return -1;
    }
}
int main()
{


    int Number, DigitSearch, DigitPosition = 0, num = 0;
    cout<<"Enter the number  ::  ";
    cin>>Number;
    cout<<"Enter the digit you want to find its position  ::  ";
    cin>>DigitSearch;
    num = SearchDigit(Number, DigitSearch, DigitPosition, 1, 1);
    cout<<"The position of the digit is at ::  "<<num<<endl;


return 0;
}