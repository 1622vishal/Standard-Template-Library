/*----Written by :- Vishal Yadav----*/
/*----Date :- 12-10-23----*/

/*Program to illustrate working of Vectors and functions associated with them*/

#include<iostream>      //OR just use bits/stdc++.h
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {4, 5, 7, 3};
    //Size function and similar function
    cout<<"Size is:- "<<v.size()<<endl;
    cout<<"Capacity is:- "<<v.capacity()<<endl;
    cout<<"Max Size is:- "<<v.max_size()<<endl;
    return 0;
}