/*----Written by :- Vishal Yadav----*/
/*----Date :- 13-10-23----*/

/*Program to illustrate working of List and functions associated with them*/

#include<iostream>
#include<list>
using namespace std;

void printlist(list<int> &ll)            //& operator signifies pass by reference here(alias thing)
{
    for(list<int>::iterator iter=ll.begin() ; iter!=ll.end() ; iter++)    //We can also use auto iter 
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> ll = {5, 6, 2, 9, 8};
    printlist(ll);
    return 0;
}