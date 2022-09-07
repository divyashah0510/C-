#include<iostream>
using namespace std;
main()
{
    int amount = 0,notes500=0,notes100=0,notes50=0,notes10=0,notes20=0,notes5=0,notes2=0,notes1=0;
    cout<<"Enter the amount :";
    cin>>amount;
    if(amount>=500)
    {
        notes500=amount/500;
        amount=amount-notes500*500;
    }
    if(amount>=100)
    {
        notes100=amount/100;
        amount=amount-notes100*100;
    }
    if(amount>=50)
    {
        notes50=amount/50;
        amount=amount-notes50*50;
    }
    if(amount>=20)
    {
        notes20=amount/20;
        amount=amount-notes20*20;
    }
    if(amount>=10)
    {
        notes10=amount/10;
        amount=amount-notes10*10;
    }
    if(amount>=5)
    {
        notes5=amount/5;
        amount=amount-notes5*5;
    }
    if(amount>=2)
    {
        notes2=amount/2;
        amount=amount-notes2*2;
    }
    if(amount>=1)
    {
        notes1=amount/1;
        amount=amount-notes1*1;
    }
    cout<<"The change can be given as :"<<endl;
    cout<<"500- "<<notes500<<endl;
    cout<<"100- "<<notes100<<endl;
    cout<<"50- "<<notes50<<endl;
    cout<<"20- "<<notes20<<endl;
    cout<<"10- "<<notes10<<endl;
    cout<<"5- "<<notes5<<endl;
    cout<<"2- "<<notes2<<endl;
    cout<<"1- "<<notes1<<endl;
}
