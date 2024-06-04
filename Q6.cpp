#include<iostream>
using namespace std;

bool isSubStr(char* str1, char* str2) 
{
    if(*str1 != '\0')
    {
        if (*str1 == *str2) 
    {
        return isSubStr(str1 + 1, str2 + 1);
    }
    }

    
    if(*str1 == '\0')
    {
        return true;
    }
    if(*str2 == '\0')
    {
        return false;
    }
        
        
        return isSubStr(str1, str2 + 1);

}

int main()
{
    char* const str1 = new char;
    char* const str2 = new char;
    cout<<"Enter string1 ::  ";
    cin>>str1;
    cout<<"Enter string2 ::  ";
    cin>>str2;
    if (isSubStr(str1, str2)) {
        cout << str1 << " is a substring of " << str2 << endl;
    } else {
        cout << str1 << " is not a substring of " << str2 << endl;
    }
    
delete [] str1;
delete [] str2;

return 0;
    
}
