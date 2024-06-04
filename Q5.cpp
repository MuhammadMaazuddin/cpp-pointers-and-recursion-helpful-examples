#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int multiply(int a, int b) 
{

    int c = 0, d = 0;


    if (b == 0) 
    {
        return 0; 
    } 
    else if (b & 1) 
    {
        
        c = a << 1;
        d = b >> 1;
        return a + multiply(c, d);
    }
    else 
    {
        c = a << 1;
        d = b >> 1;
        return multiply(c, d);
    }
}

int power(int base, int exponent, int extra)
{
    int num = 0;
   if (exponent == 0) 
    {
        return 1;
    }
    num = exponent>>1;



    int result = power(base, num, extra);


    result = multiply(result, result);


    if (exponent & 1) 
    {
        result = multiply(result, base);
    }

    
    return result;

}
int main()
{
    int base = 0, exponent = 0, pow = 0;
    cout<<"Enter the base  ::  ";
    cin>>base;
    cout<<"Enter the exponent  ::  ";
    cin>>exponent;
    pow = power(base, exponent, 1);
    cout<<"The power of number is  ::  "<<pow<<endl;


return 0;


}



