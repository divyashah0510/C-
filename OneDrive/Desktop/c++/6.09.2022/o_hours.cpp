#include<iostream>
using namespace std;

main()
{
    int number;
    string zone;
    cout<<"Enter the number btween (0-12)";
    cin>>number;
    cout<<"Enter the am / pm";    
    cin>>zone;
    if(zone=="am")
    {
    if (number>=9&&number<=11)
    {
        cout<<"Open";
    }
    else
    {
        cout<<"close";
    }
    }
    else if ((zone=="pm"&&number>=1&&number<=5)||number==12)
    {
        cout<<"Open";
    }
    else
    {
        cout<<"close";
    }
    
    
}