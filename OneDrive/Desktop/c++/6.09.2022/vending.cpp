/*Vending machine program*/
#include<iostream>
using namespace std;
main()
{
    int coin;
    cout<<"Enter the coin :(2,5,10)";
    cin>>coin;
    if (coin==2)
    {
        cout<<"You get a Toffy!";
    }
    else if (coin==5)
    {
        cout<<"You get a Dary Milk!";
    }
    else if (coin==10)
    {
        cout<<"You get a kurkure!";
    }
    else
    {
        cout<<"You get nothing !";
    }
    
}