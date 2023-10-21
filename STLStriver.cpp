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
    

    return 0;
}