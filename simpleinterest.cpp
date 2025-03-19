#include<iostream>
using namespace std;
int main()
{
    float p ,t,r;
    cout << "enter the principal amount  :  ";
    cin >> p;
    cout << " \n enter the time of interest  :  ";
    cin >> t;
    cout << " \n enter the rate of interest  :  ";
    cin >> r;
    float SI = (p*t*r)/100;
    cout << "Simple Interest   := " << SI;
    return 0;
}