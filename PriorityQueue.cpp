/*----Written by :- Vishal Yadav----*/
/*----Date :- 17-10-23----*/

/*Program to illustrate working of Priority Queue and functions associated with them*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    priority_queue<int> pq;   //-->this line is equivalent to <int , vector<int> , std::less<int>>
    vector<int> vv = {3,6,2,9,6,5,1,0,8};
    for(auto i : vv)      //Another way to traverse array or vector. Note:- We can also use int inplace of auto
    {
        cout<<i<<" ";
        pq.push(i);
    }
    cout<<endl;
    //Now since the element is inserted into priority_queue check the first element using top()
    cout<<"Highest Priority Element:- "<<pq.top()<<endl;         //It will return the greatest element 
    

    //If we want to change the priority of the elements then do this
    priority_queue<int , vector<int> , std::greater<int>> pq2;    //greater<int> assigned the priority to smallest element
    for(auto i : vv)
    {
        pq2.push(i);
    }
    cout<<"Highest Priority Element:- "<<pq2.top()<<endl;

    //We can also define our custom comparator, above we have used built in comparator
    //Custom compare is used in cases when we use class
    auto cmp = [] (int a, int b)
    {
        return a > b;
    };
    priority_queue<int , vector<int> , decltype(cmp)> pq3(cmp);
    for(auto i : vv)
    {
        pq3.push(i);
    }
    cout<<"Highest Priority Element:- "<<pq3.top()<<endl;

    return 0;
}
