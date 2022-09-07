/*Write a function to create a circuit power calculator*/
#include<iostream>
using namespace std;

main()
{
        float current,voltage ;
    cout<<"\nEnter the value of current and voltage of a circuit:";
    cin>>current>>voltage;
    cout<<"The power of the circuit is "<<current*voltage<<endl;
}