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
    //Now what will be the capacity of v if we insert some element in vector
    v.push_back(6);
    cout<<"Size is:- "<<v.size()<<endl;
    cout<<"Capacity is:- "<<v.capacity()<<endl;
    cout<<"Is Vector empty:- "<<v.empty()<<endl;
    // v.resize(3);          //deletes all the element after the given size
    // cout<<"New Size is:- "<<v.size()<<endl;

    v.shrink_to_fit();         //Reduces the capacity to fit the size of the Vector
    cout<<"New capacity is:- "<<v.capacity()<<endl;


    //Accessing Elements 
    cout<<"Element at 6 position:- "<<v[5]<<endl;         //returns garbage value because index is out of range
    //cout<<"Element at 6 position:- "<<v.at(5)<<endl;        //at() checks for out of range  (throws error)

    //Accessing front and back(last) element
    cout<<"Front Element:- "<<v.front()<<endl;
    cout<<"Back Element:- "<<v.back()<<endl;

    //Insert element in middle
    v.insert(v.begin()+2 , 99);
    cout<<"Element inserted into middle:- "<<v.at(2)<<endl;

    //We can also insert a range of elements from other containers
    vector<int> v1 = {87 , 77 , 67};
    v.insert(v.begin() , v1.begin() , v1.end());
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //Push back(line 18) and pop back 
    v.pop_back();
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //To Erase a element or element in a particular range
    v.erase(v.begin()+1,v.begin()+3);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
    //v.swap(v1);    it is used to swap the content of two vectors
    v.clear();
    cout<<"Is vector empty:- "<<v.empty()<<endl;
    
    return 0;
}