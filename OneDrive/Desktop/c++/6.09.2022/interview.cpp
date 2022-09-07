/*Interview elligbilty program*/
#include<iostream>
using namespace std;
main()
{
    float per10,per12,per_TY;
    cout<<"\nEnter the 10th percentage:";
    cin>>per10;
    cout<<"\nEnter the 12th percentage:";
    cin>>per12;
    cout<<"\nEnter the TY percentage:";
    cin>>per_TY;
    if(per10>=70&&per12>=70&&per_TY>=70)
    {
        cout<<"You are eligible !";
    }
    else
    {
        cout<<"Please try in next life.";
    }
    

}