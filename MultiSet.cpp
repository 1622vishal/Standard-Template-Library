/*----Written by :- Vishal Yadav----*/
/*----Date :- 18-10-23----*/

/*Program to illustrate working of MultiSet and functions associated with them*/

#include<iostream>
#include<set>
using namespace std;

void printms(multiset<int>& ms)
{
    for(auto i : ms)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    multiset<int> ms = {2,7,5,9,1,23,56,78,34,2,9,56,9,3,9};
    cout<<"Size :-"<<ms.size()<<endl;
    
    //Printing multiset
    printms(ms);

    //Counting a particular element
    cout<<"Count is :-"<<ms.count(9)<<endl;

    //Finding an element
    cout<<"Element is :-"<<*ms.find(9)<<endl;

    //Working of insert() function
    ms.insert({45,34,99});       //duplicate element(34) will also be inserted
    printms(ms);

    //Erasing an element
    int count = ms.erase(9);     //erase function returns the count of erased elements
    cout<<"Element erased :-"<<count<<endl;
    printms(ms);

    //Upperbound and lowerbound works the same as in set, so not discussing them here
    
    return 0;
}