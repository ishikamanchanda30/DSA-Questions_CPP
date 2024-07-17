#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
// #include<bits/stdc++.h> 
// to include all the above at once


int main()
{
    int basic[4] = {1, 2, 3, 4};
    array<int, 5> a = {1, 2, 3, 4, 5};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    // ACCESS ELEMENTS --- time complexity O(1)
    cout << "Element at index 1 : " << a.at(1) << endl;

    // EMPTY OR NOT ?
    cout << "Is array empty? " << a.empty() << endl;

    // FIRST ELEMENT
    cout << "First element : " << a.front() << endl;

    // LAST ELEMENT
    cout << "Last element : " << a.back() << endl;

    //-------------VECTORS------------//
    /*  Vector is a dynamic array
    agar humara vector bhar jaata hai, size full ho jata hai
    it created a new vector, double the size of the previous vector.

     copies all the elements from the previous vector, adds the new element and dumps the old vector*/

    vector<int> v;

    // check size ( kitne element ha currently )
    cout << "Size : " << v.size() << endl;
    // check capacity (total kitne element ke liye memory allocate kari hai)
    cout << "Capacity : " << v.capacity() << endl;

    // PUSH ELEMENTS IN VECTOR
    v.push_back(11);

    // check capacity (total kitne element ke liye memory allocate kari hai)
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(22);

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(33);

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(44);

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    // ELEMENT VECTOR
    cout << "Element at index 1 : " << v.at(1) << endl;

    // Same front and back used in vectors too

    // POP BACK --deletes the last element

    cout << "\n BEFORE POP \n";
    for (int i : v)
    {
        cout << i << endl;
    }
    //POPS LAST ELEMENT
    cout << "\n AFTER POP \n";
    v.pop_back();
    
    for (int i : v)
    {
        cout << i << endl;
    }

    // CLEAR VECTOR -- delete all element 
    cout << "Size before clear : " <<v.size() << endl;
    cout << "Capacity before clear : " <<v.capacity() << endl;
    v.clear();

    cout << "Size after clear : " << v.size () << endl;    
    cout << "Capacity after clear : " << v.capacity () << endl; 

    // --- IMP --- .clear() size clear karta hai , Caqpacity nahi ( abhi bhi memory allocated hai vector ko)

    vector <int> vector1(5,1);
    // vector ka size 5 hai, elements initialized by '1'

    // COPY 1 vector to another
    vector <int> initial_v(5,0);
    vector <int> copy_v(initial_v);   


    //---------Deque -------------
    // insertion , removal at the start or end at both
    /* multiple fixed static array , complex impletation 
    is dynamic , random access possible */

    deque <int> d;

    d.push_back(11);
    d.push_front(22);
    for ( int i:d) {
        cout << i << endl; 
    }
    cout << "Popping back element" << endl;
    d.pop_back();
    for ( int i:d) {
        cout << i << endl; 
    }
    // .at () front and back () , .empty() can be used

    d.push_front(33);
    d.push_front(44);
    d.push_front(55);
    d.push_front(66);

    for ( int i:d) {
        cout << i << endl; 
    }
    // DELETER certain parts of DQ
    d.erase(d.begin(), d.begin()+2);

    //PRINTINTG
    cout << " \n\n printing after erasing \n\n";
        for ( int i:d) {
        cout << i << endl; 
    }

    // ---- LISTS ----
    // double linked list cannot use .at() or directly access elements from middle
    list <int> l;
    l.push_back(11);
    l.push_back(22);
    l.push_front(33);
    l.push_front(44);
    
    // COMPLEXITY : O(n)
    cout << " \nSize of list : " << l.size();

    //STACK LIFO principle
    stack <string> s;
    s.push("Ishika");
    s.push("Manchanda");
    s.push("CSE");

    // PRINTING TOP ELEMENT
    cout <<"\n\nTop Element : " << s.top();
    s.pop();
    cout << "\n\nSize of Stack : " << s.size();

    // QUEUE --- line First in First out
    queue <int> q;
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);

    cout << "\n\nFirst Element : " << q.front(); 
    cout << "\n\nSIze before pop : " << q.size();
    q.pop(); 
    cout << "\n\nSIze after pop : " << q.size(); 

    //Priority Queue
    // Max Heap --
    priority_queue <int> maxi;

    //Min Heap
    priority_queue <int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    int n = maxi.size();

    mini.push(44);
    mini.push(77);
    mini.push(11);
    mini.push(33);
    mini.push(22);
    int m = mini.size();
    cout <<"\n Printing MAXIMUM HEAP -- MAXI\n\n";
    for( int i =0; i < n; i++) {
        cout << maxi.top() <<" ";
        maxi.pop();
    }

    cout <<"\n\n Printing MINIMUM HEAP --MINI\n\n";
    for( int i =0; i < m; i++) {
        cout << mini.top() << " ";
        maxi.pop();
    }

    // --------- SETS -----------
    /* Set me duplicate values only appear once
    No modifications possibles except Delete or Add
    Collection of unique elements
    Elements returned in sorted order
    .insert() TIME COMPLEXITY O (log n)
     */

    // Unordered Set

    set <int> set1;

    //Add values
    set1.insert(66);
    set1.insert(66);
    set1.insert(44);
    // adding 11 4 times
    set1.insert(11);
    set1.insert(11);
    set1.insert(11);
    set1.insert(11);
    // adding 77 2 times
    set1.insert(77);
    set1.insert(77);

    cout << "\n\nPrinting set : \n";

    for(int i:set1) {
        cout << i << endl;
    } 
    // ERASE FUNCTION USING ITERATOR
    set <int>::iterator it = set1.begin();
    // iterator it gets the value of 1st element (0) <set is sortred automatically>
    it++;
    //incrementing iterator and erasing element at 1 index
    set1.erase(it);
    cout <<"\n\nAdter erasing : ";
    for(int i:set1) {
        cout << i << endl;
    }

    //count : tells if an element is present or not
    cout <<" COUNT FUNCTION \n";
    cout << "is 11 present ? " << set1.count(11) << endl;    
    cout << "is 300 present ? " << set1.count(300) << endl;

    //find : tells the iterator if the element present
    cout << "FIND FUNCTION \n";
    set <int>::iterator it1 = set1.find(11);
    set <int>::iterator it2 = set1.find(200);
    // Iterator is a pointer !!
    cout << "is 11 present ? " << &it1 << endl;    
    cout << "is 300 present ? " << *it2 << endl;

    // erase, find, insert, count COMPLEXITY : O(log n)

    // --- MAP ---
    /* Key values ki tarah store hota ha
    all keys are unique
    one key points to only value 
    
    2 keys same value ko point kar sakte ha 
    1 key 2 values ko point nahi kar sakti 
    time complexity of all : O(log n) 
    Implemented through
        Random Black Tree
        Balance Tree
        Complexity O(log n)
        
    Unordered Maps : Implemented thorugh Hash table
        Complexity O{1}
    */

    map <int , string> map1;
    map1[1] = "first";
    map1[2] = "second";
    //AANOTHER WAY TO INSERT

    map1.insert({5,"Bheem"});
    cout <<"\nPRINTING MAPS\n";
    for(auto i:map1) {
        cout << i.first << " "<< i.second << endl;
    }

    //FIND ELEMENTS IN MAP

    cout << "Finding 5 : " << map1.count(5) << endl;

    cout << "Finding 6 : " << map1.count(6) << endl;

    // ERASING ELEMENT
    cout<<"\nAfter Erase\n";

    map1.erase(2);
    cout <<"\nPRINTING MAPS\n";
    for(auto i:map1) {
        cout << i.first << " "<< i.second << endl;
    }

    auto it3 = map1.find(1);
    for (auto i=it3; i!=map1.end(); i++) {
        cout << (*it3).first << " ";
    }



}