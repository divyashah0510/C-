//try it yourself: Accept age of ramesh and suresh and find who is the younger.
#include <iostream>
using namespace std;
main()
{
    int rAge;
    int sAge;

    cout<<"Enter age of ramesh: ";
    cin>>rAge;
    cout<<"Enter age of suresh: ";
    cin>>sAge;

    if (rAge<sAge)
    {
        cout<<"Ramesh is younger than Suresh";
    }
    else if(rAge==sAge)
    {
        cout<<"Ages are same";
    }
    else
    {
        cout<<"Suresh is yonger than ramesh";
    }
    

}