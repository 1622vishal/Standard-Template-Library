/*----Written by :- Vishal Yadav----*/
/*----Date :- 21-10-23----*/

/*Complete STL by Striver*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Pairs
    pair<int,int> pr = {9 , 8};
    cout<<"Pair is :- {"<<pr.first<<" , "<<pr.second<<"}"<<endl;
    //Nested Pair (We can put as many pairs as we want inside a pair)
    pair<int , pair<int,int>> pr2 = {2 , {3,4}};       //A pair can have two different variables such as string and int
    cout<<"Nested pair is :- {"<<pr2.first<<",{"<<pr2.second.first<<","<<pr2.second.second<<"}}"<<endl;
    //Array of pairs (We can also create array of vectors)
    pair<int,int> pr3[] = {{1,2} , {6,7} , {8,3}};
    cout<<pr3[1].second<<endl;

    /****************************************************************************************************************/

    //Vectors
    vector<int> v1(5);     //Declares a vector of size 5 and all elements = 0
    for(auto x : v1)
        cout<<x<<" ";
    cout<<endl;

    vector<int> v2(5,99);       //All 5 elements are 99 
    for(auto x : v2)
        cout<<x<<" ";
    cout<<endl;
    //Copying one vector to other
    v2 = v1;         //Using overloaded assignment operator
    vector<int> v3(v2);      //Using constructor format and it' same as vector<int> v3 = v2;
    //Rest other things we have already discussed in Vectors.cpp

    /****************************************************************************************************************/
    

    return 0;
}