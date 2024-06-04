#include<iostream>
using namespace std;
int StringLength(string str, int move)
{
    if(str[move] == '\0')
    {
        return move;
    }
        return StringLength(str, move+1);

}
int Check( char str1, string str2, int move, int end,int  num)
{
    
    //cout<<str2[move]<<" "<<str1<<endl;
    if(move<end)
    {
        if(str2[move] == str1)
    {
    return Check(str1, str2, move+1, end, num+1);
    }
    return Check(str1, str2, move+1, end, num);
    }
    
   return num;
    
    
    
    

}
int countSubstrs(string str, int starting, int index, int size)
{
    int num = 0;
    int result = 0;
    result = StringLength(str, 0);
    //cout<<result<<endl;
    if(str[index] == '\0')
    {
       return result+size;
    }
    //cout<<str[index]<<" "<<size<<endl;
    num =  Check(str[index],str,index+1, result,0);
    //cout<<"num "<<num<<endl;
    if(num == 1)
    {
           // cout<<"Check "<<str[index]<<" "<<size<<" ";

        size++;
        //cout<<size<<endl;
    }
    return countSubstrs(str,0,index+1, size);


}

int main()
{
    char* const str1 = new char;
    cout<<"Enter the string  ::  ";
    cin>>str1;
    int result = 0;
    result = countSubstrs(str1, 0,0,0);

    cout<<"The substrings of the user entered string is  ::  "<<result<<endl;



    delete [] str1;



    return 0;

}