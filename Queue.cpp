/*----Written by :- Vishal Yadav----*/
/*----Date :- 16-10-23----*/

/*Program to illustrate working of Queue and functions associated with them*/
/*Most of the working of queue is similar to stack except that it follows FIFO principle i.e., element is inserted 
in the last and deleted from first*/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> qq;
    qq.push(3);
    qq.push(6);
    qq.push(2);
    qq.push(9);
    qq.push(1);

    //cout<<qq.top();    We cannot use top because it's related to stack
    cout<<qq.front()<<endl;

    qq.pop();
    cout<<qq.front()<<endl;
    qq.pop();
    cout<<qq.front()<<endl;

    return 0;

}