/*----Written by :- Vishal Yadav----*/
/*----Date :- 17-10-23----*/

/*Program to illustrate working of Set and functions associated with them*/

#include <iostream>
#include <set>
#include<vector>
using namespace std;

int main()
{
    set<int> st = {23, 45, 56, 23, 5, 1, 43, 98, 28, 5, 45};
    cout << "Size :-" << st.size() << endl; // It will not count duplicate element
    st.insert(100);
    st.insert(23); // 23 will not be inserted because it was already present
    cout << "New Size is :-" << st.size() << endl;

    //count() function
    cout<<st.count(34)<<endl;     //count returns 0(if element is not present) or 1(if present)

    //Printing the set
    for(auto i : st)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //Erasing a element
    // auto itr = st.erase(5);      //We can pass the element directly
    // cout<<"Iterator :-"<<itr<<endl;          

    auto itr = st.erase(st.find(43));
    cout<<"Iterator to the next of deleted element:- "<<*itr<<endl;

    //find() function
    auto itr2 = st.find(45);
    cout<<*itr2<<endl;

    //Upper bound and lower bound
    auto iter = st.upper_bound(56);    //Now itr will be pointing to the element greater than 50
    cout<<"Upper Bound:- "<<*iter<<endl;

    auto it = st.lower_bound(56);
    cout<<"Lower Bound:- "<<*it<<endl;

    //Working of insert() function
    st.insert({67, 85, 25, 99});     //initialiser list
    for(auto i : st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int> v = {387 , 567 ,1000};
    st.insert(v.begin() , v.end());         //inserting by passing iterators
    for(auto i : st)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}