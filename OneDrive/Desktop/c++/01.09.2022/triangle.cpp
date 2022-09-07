// /*write a program to find area of triangle */
// #include<iostream>
// #include<cmath>
// using namespace std;
// main()
// {
//     int a,b,c;
//     float area,s;
//     cout<<"Enter the three sides of triangle:"<<endl;
//     cin>>a>>b>>c;
//     s=(a+b+c)/2;
//     area=sqrt(s*(s-a)*(s-b)*(s-c));
//     cout<<"The area of triangle is :"<<area<<endl;
// }




/*write a to find area of triangle */
#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int a,b,c;
    float area,s;
    cout<<"Enter the three sides of triangle:"<<endl;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is :"<<area<<endl;
}
