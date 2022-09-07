/*Write the code to return first element of array.*/
#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the number of elemnts to be added to the array : "<<endl;
    cin>>size;
    int array[size];
    for (int i = 0; i <size; i++)
    {
        cin>>array[i];
    }
    cout<<array[0]<<" is the First Element added to array!"<<endl;  
    cout<<array[size-1]<<" is the Last Element added to array!"<<endl;  
}