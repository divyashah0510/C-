/*You are counting points for a basketball game, given the 
amount of 3-pointers scored and 2-pointers scored, find the
final points for the team and return that value (2 -pointers 
scored, 3-pointers scored).*/
#include<iostream>
using namespace std;
main()
{
    int point3,point2;
    cout<<"Enter the three pointer scored by team in game:"<<endl;
    cin>>point3;
    cout<<"Enter the two pointer scored by team in game:"<<endl;
    cin>>point2;
    cout<<"The total point scored by team is : "<<(point3*3)+(point2*2)<<endl;

}