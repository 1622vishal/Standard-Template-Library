/*----Written by :- Vishal Yadav----*/
/*----Date :- 19-10-23----*/

/*Program to illustrate working of Map and functions associated with them*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

void printMap(map<int,string> & mapName)
{
    for(map<int,string>::iterator iter=mapName.begin() ; iter!=mapName.end() ; iter++)   //for(auto i:mapName)
    {
        cout<<"{"<<(*iter).first<<","<<(*iter).second<<"} ";
    }
    cout<<endl;
}

int main()
{
    map<int , string> mapName ={{1,"Vishal"} , {2,"Sidharth"} , {3,"Vivek"}};
    
    //size
    cout<<"Size :-"<<mapName.size()<<endl;

    //Using = and [] operator to assign value to map
    mapName[4] = "Ashwani";
    printMap(mapName);

    //Using insert function
    mapName.insert({5,"Yash"});
    mapName.insert({4,"Rahul"});    //This will not be inserted because key 4 already exists
    printMap(mapName);

    //erasing an element
    auto iter = mapName.erase(mapName.find(4));   
    cout<<"Iterator to the next element(key):- "<<(*iter).first<<endl;
    printMap(mapName);

    //Upperbound and Lowerbound
    auto ub = mapName.upper_bound(2);
    auto lb = mapName.lower_bound(2);
    cout<<"UB key :-"<<ub->first<<" LB key :-"<<lb->first<<endl;

    return 0;
}