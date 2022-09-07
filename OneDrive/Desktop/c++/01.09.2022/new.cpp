/*Write a code to accept the marks of student and to display his 
her grade.
(Above 90 excellent, above 80 very good,above 75 good 
,above 60 satisfactory ,below 50 not -satisfactory below 35 
failed).*/
#include<iostream>
using namespace std;
main()
{
    float marks;
    cout<<"Enter the marks :"<<endl;
    cin>>marks;
    if (marks>=90)
    {
        cout<<"Excellent"<<endl;        
    }
    else if (marks>=80&&marks<=89.99)
    {
        cout<<"Very good"<<endl;
    }
    else if (marks>=75&&marks<=79.99)
    {
        cout<<"Good"<<endl;
    }
    else if (marks>=60&&marks<=74.99)
    {
        cout<<"Satisfactory"<<endl;
    }
    else if (marks>=50&&marks<=59.99)
    {
        cout<<"-Satisfactory"<<endl;
    }
    else if (marks<35)
    {
        cout<<"Failed"<<endl;
    }
}