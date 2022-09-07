/*Write a code to create a restaurant billing system.
(Take the input from user of his order and display his total bill 
amount)*/
#include<iostream>
using namespace std;
main()
{
    string ProductName;
    int size;
    cout<<"How many things you need to order?"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Tell us what you want you are wanting to order\n\n(Pleases enter a number)\n Here is our order\n1.Paneer Tikkha masala\n2.Pav Bhajji\n3.Dosa\n4.Rasam Vada\n5.Tandoori Roti\n6.Pizza"<<endl;
        cin>>ProductName;
    }
    
    
}