/*----Written by :- Vishal Yadav----*/
/*----Date :- 13-10-23----*/

/*Program to illustrate working of Deque and functions associated with them*/

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    /*deque are similar to vectors except that they allow push and pop at both the ends*/
    deque<int> dd = {5, 6, 2, 9, 3, 8};

    //Traversing forward 
    for(deque<int>::iterator itr=dd.begin() ; itr!=dd.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    //Traversing backward
    for(deque<int>::reverse_iterator itr=dd.rbegin() ; itr!=dd.rend() ; itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //We will discuss only push_front and pop_front
    dd.push_front(1);
    dd.push_front(2);
    for(deque<int>::iterator itr=dd.begin() ; itr!=dd.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    dd.pop_front();
    for(deque<int>::iterator itr=dd.begin() ; itr!=dd.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}