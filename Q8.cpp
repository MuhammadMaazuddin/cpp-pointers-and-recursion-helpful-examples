#include<iostream>
using namespace std;
void DisplaySpaceFirst(int start, int n)
{
    if(n<=start)
    {
        cout<<" ";
        DisplaySpaceFirst(start, n+1);
    }
}
void DisplaySpaceSecond(int start, int n)
{
    if(n<=start)
    {
        cout<<" ";
        DisplaySpaceFirst(start, n+1);
    }
}
void PrintPattern(int start, int end)
{
    if(start <=end)
    {
        DisplaySpaceFirst(start,0);
        cout<<"*";
        DisplaySpaceSecond(((end*2)-(2*start)),0);
        cout<<"*";
        cout<<endl;

        start++;
        if(start<=end)
        {
            PrintPattern(start,end);
        }
        else
        {
            
            
            PrintPattern(start,0);
        }
        
    }
    else if(end<=start)
    {
        if(end == 0)
        {
            DisplaySpaceFirst(start,0);
                    cout<<"*";
                    cout<<endl;
        }
        else
        {
            DisplaySpaceFirst(start-end,0);
            cout<<"*";
            DisplaySpaceSecond(((end-1)*2),0);
            cout<<"*";
            cout<<endl;
        }
        
        
    if(end < (start-1))
        {
            PrintPattern(start,end+1);
        }   
    }
    
}
int main()
{
    int start = 0, end = 0;
    cout<<"Enter the start   ::  ";
    cin>>start;
    cout<<"Enter the end  ::  ";
    cin>>end;
    PrintPattern(start,end);



return 0;

}