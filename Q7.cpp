#include<iostream>
using namespace std;
#include"Q5.cpp"
int toBinary(int num, int extra)
{
    
}
string toHexa(int num, int extra)
{

}
int toOctal(int num, int extra)
{

}
int main()
{
    int ToBinary = 0, ToOctal = 0, integer = 0;
    string ToHexa ;
    cout<<"Enter the intiger  ::  ";
    cin>>integer;
    ToBinary = toBinary(integer, 0);
    ToHexa = toHexa(integer ,0);
    ToOctal = toOctal(integer, 0);
    cout<<"The Binary of the number is  ::  "<<ToBinary<<endl;
    cout<<" The Octal of the number is  ::  "<<ToOctal<<endl;
    cout<<"  The Hexa of the number is  ::  "<<ToHexa<<endl;


return 0;

}