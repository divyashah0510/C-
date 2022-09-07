// begin
//     character cProductName
//     numeric nQuantity ,nPrice,nTotalAmt
//     display "What did you buy today?"
//     accept cProductName 
//     display "How much quantity you buy today?"
//     accept nQuantity 
//     display "What is price per product ?"
//     accept nPrice 
//     nTotalAmt=nPrice*nQuantity
//     display"Your total amount is Rs."
//     display nTotalAmt

// end
#include <iostream>
using namespace std;
main()
{
    string ProductName;
    int Quantity,Price,TotalAmt;
    cout<<"Welcome to Dmart!!\n";
    cout<<"What did you buy today?\n";
    cin>>ProductName;
    cout<<"HOw much Quantity of "<<ProductName<<" did you buy?\n";
    cin>>Quantity;
    cout<<"What is price per  "<<ProductName<<"?\n";
    cin>>Price;
    TotalAmt=Price*Quantity;
    cout<<"Your Total amount is "<<TotalAmt<<endl;

}