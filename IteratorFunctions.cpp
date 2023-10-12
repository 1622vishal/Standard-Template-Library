/*----Written by :- Vishal Yadav----*/
/*----Date :- 12-10-23----*/

/*Program to illustrate iterator functions*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {8, 5, 3, 6, 2, 1, 4};
    cout<<"v.begin() -> "<<*v.begin()<<endl;       //Dereference using * to get the value
    int* x = & v[6];
    x++;
    *x=-50;         //After doing this -50 is added in the last of our vector (not literally)
    cout<<"v.end() -> "<<*v.end()<<endl;         //See output

    cout<<"v.rbegin() -> "<<*v.rbegin()<<endl;
    cout<<"v.rend() -> "<<*v.rend()<<endl;
    return 0;
}