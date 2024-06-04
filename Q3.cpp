#include<iostream>
using namespace std;
int Addition(string rollnumber, int n)
{
        int alpha = rollnumber[n];
        alpha = alpha - 48;


    if(n==8)
    {
        return 0;
    }
    else
        return alpha + Addition(rollnumber, n+1);
   
    
}
int AdditionOfRollNumber(string rollnumber)
{
      return  Addition(rollnumber,0);
   
    
}

int FillArray(int arr[], int index, int calculatedNumber)
{
    if(*arr>=50)
    {
        return calculatedNumber;
    }   
       if(*arr % index == 0)
    {
        cout<<*arr<<endl;
        calculatedNumber += *arr;
    }
         return FillArray((arr+1), index, calculatedNumber);


   
    

   
}
int main()
{
    // int SIZE = 50;
    int array[50] = {1,2,3,4,5,6,7,8,9,10,
                       11,12,13,14,15,16,17,
                       18,19,20,21,22,23,24,
                       25,26,27,28,29,30,31,
                       32,33,34,35,36,37,38,
                       39,40,41,42,43,44,45,
                       46,47,48,49,50};


    int  CalculatedNumber = 0, CalculatedNumberSum = 0;
    string RollNumber;
    cout<<"Enter your Roll number  ::  ";
    cin>>RollNumber;
    CalculatedNumber = AdditionOfRollNumber(RollNumber);
    CalculatedNumber = (CalculatedNumber-54)/2;
    cout<<"The caculated number of your roll number is  ::  "<<CalculatedNumber<<endl;
    CalculatedNumberSum = FillArray(array,CalculatedNumber, CalculatedNumber);
    cout<<"The sum of calculated number with array indexes multiple of it is  ::  "<<CalculatedNumberSum<<endl;

return 0;


}

