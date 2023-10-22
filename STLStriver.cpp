/*----Written by :- Vishal Yadav----*/
/*----Date :- 21-10-23----*/

/*Complete STL by Striver*/

#include<bits/stdc++.h>
using namespace std;

//Comparator function (line 74)
bool comp1(pair<int,int> p1 , pair<int,int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    return true;
}

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
    //Stack       
    //Queue
    //Deque
    //Priority Queue
    //Set
    //Multiset      ---Discussed previously (Discussed nothing new)
    //Unordered Set  (upper_bound() and lowe_bound() does not works)

    //Map
    map<int , string> mp;
    mp[3] = "Hello ";
    mp[5] = "World";
    cout<<mp[3]<<" "<<mp[5]<<endl;     //We can print values using keys (other things are discussed in Map.cpp)
    //Multimap      ---Same as map (discussed previously)

    /***************************************************************************************************************/
    
    //Agorithms and Builtin functions

    vector<int> v = {4,6,2,8,1,76,43,98,21,9};
    sort(v.begin() , v.end());
    for(auto x : v)
        cout<<x<<" ";
    cout<<endl;
    //sort(v.begin() , v.end() , std::greater<int>);    This line is showing error

    //Now what if we want to sort the elements according to ourselves
    vector<pair<int,int>> vp = {{32,56} , {87,43} , {21,44} , {49,92} , {99,11} , {12,72}};
    sort(vp.begin() , vp.end() , comp1);
    cout<<"Sorted vector according to second element of pair :-"<<endl;
    for(auto x1 : vp)
        cout<<"{"<<x1.first<<" , "<<x1.second<<"} ";
    cout<<endl;

    //Returning the number of set bits
    int num = 34;
    int count = __builtin_popcount(num);   //It returns the number of set bits (i.e., 1)
    cout<<"Set Bits :- "<<count<<endl;     

    //Next permutations
    string ss = "2134";
    do
    {
        cout<<ss<<" ";
    } while (next_permutation(ss.begin() , ss.end()));
    cout<<endl;

    //Printing maximum element from an vector (array)
    int maxx = *max_element(v.begin() , v.end());
    int minn = *min_element(v.begin() , v.end());
    cout<<"Max element is :- "<<maxx<<endl;    
    cout<<"Min element is :- "<<minn<<endl;

    /***************************************************************************************************************/

    return 0;
}