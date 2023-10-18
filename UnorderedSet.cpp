/*----Written by :- Vishal Yadav----*/
/*----Date :- 18-10-23----*/

/*Program to illustrate working of unordered_set and functions associated with them*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us = {43, 56, 21, 89, 65, 43, 21, 56, 21};
    for(auto i : us)
    {
        cout<<i<<" ";         //Elements are printed in any order
    }
    cout<<endl;
    auto itr = us.erase(us.begin());
    cout<<*itr<<endl;        //print the next element after deleting

    //All of the functions are same  
    //Some new functions 
    cout<<"Bucket count:- "<<us.bucket_count()<<endl;
    cout<<"Load Factor:- "<<us.load_factor()<<endl;       
    return 0;
}