#include<iostream>
using namespace std;
int main()
{
    float p ,t,r;
    cout << "enter the principal amount";
    cout << " \n enter the time of interest";
    cout << " \n enter the rate of interest";
    cin >> p >> t >> r ;
    float SI = (p*t*r)/100;
    cout << "Simple Interest = " << SI;
    return 0;
}