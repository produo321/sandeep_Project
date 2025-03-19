#include<iostream>
using namespace std;
int main()
{
    float l,b,area,perimeter;
    cout<< "enter length and bregth of rectangle   :-  ";
    cin>> l>> b;
    area = l*b;
    perimeter = 2*(l+b);
    cout << " area of rectangle   :  "<< area;
    cout << " \n perimeter of rectangle   :"   <<perimeter;
    return 0;
}