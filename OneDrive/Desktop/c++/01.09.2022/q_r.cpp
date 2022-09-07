/*Write a Function to return quotient and remainder from two 
numbers using functions.*/
#include<iostream>
using namespace std;

float GetRemainder(int x,int y)
{
    float remainder = (x % y);
}
int GetQuotient(int x, int y)
{
    int quotient = (x/y);
    return quotient;
}
main()
{
    cout<<"Enter the numbers to find its dividend and divisor :";
    int num1,num2;
    cin>>num1>>num2;
    GetRemainder(num1,num2);
    GetQuotient(num1,num2);
    cout<<"The remainder is: "<<GetRemainder<<"and quotient is "<<GetQuotient<<endl;

}