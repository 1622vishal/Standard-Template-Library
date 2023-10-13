/*----Written by :- Vishal Yadav----*/
/*----Date :- 13-10-23----*/

/*Program to illustrate working of List and functions associated with them*/

#include <iostream>
#include <list>
using namespace std;

void printlist(list<int> &ll) //& operator signifies pass by reference here(alias thing)
{
    for (list<int>::iterator iter = ll.begin(); iter != ll.end(); iter++) // We can also use auto iter
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> ll = {5, 6, 2, 9, 8};
    printlist(ll);

    /*Some similar functions used in List whose working is same as in Vectors*/
    /*size() , front() , back() , empty() , push_back() , pop_back() , clear()*/
    // For example
    cout << "Front element:- " << ll.front() << endl;

    // Assignment operator(=)
    list<int> ll2;
    ll2 = ll;
    printlist(ll2);

    // empty()
    cout << std::boolalpha << ll.empty() << endl; // to return answer in true or false use boolalpha

    // insert() it doesn't work the same way as it does with vectors
    // Let say you want to insert a element at position 3
    list<int>::iterator itr = ll.begin();
    for (int i = 0; i < 2; i++)
    {
        itr++;
    }
    ll.insert(itr, 99);
    printlist(ll);

    // Now let say you know the element of a list and you want to insert a new element before that element
    while (*itr != 9 && itr != ll.end())
        itr++;
    ll.insert(itr , 89);
    printlist(ll);

    //Erase and remove 
    ll.erase(itr);      //erased 9
    printlist(ll);
    ll.remove(99);      //removed 99  Note:- If element is not present in list then list will remain unaffected
    printlist(ll);

    //push_front and pop_front , push_back and pop_back
    ll.push_front(1);    
    printlist(ll);
    ll.pop_front();
    printlist(ll);

    //Sorting the element of the list
    ll.sort();
    printlist(ll);

    return 0;
}