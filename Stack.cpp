/*----Written by :- Vishal Yadav----*/
/*----Date :- 13-10-23----*/

/*Program to illustrate working of Stack and functions associated with them*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> ss ;
    ss.push(8);
    ss.push(2);
    ss.push(7);
    ss.push(5);
    ss.push(3);

    //Top of the stack
    cout<<"Top :-"<<ss.top()<<endl;

    ss.pop();
    cout<<"Top :-"<<ss.top()<<endl;

    //To print the whole stack 
    // while(ss.top()!=NULL)
    // {
    //     cout<<ss.top()<<" ";
    //     ss.pop();
    // }
    // cout<<endl;
    return 0;
}