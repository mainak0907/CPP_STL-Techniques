#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*A set in STL is a container that stores unique elements in a particular order.
    Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.*/
    //he set stores the elements in sorted order.
    //set <data_type, greater<data_type>> set_name; { to sort in descending order }
/*insert() – to insert an element in the set.
set<int> s;
s.insert(1);
s.insert(2);

begin() – return an iterator pointing to the first element in the set.
s.begin();

end() – returns an iterator to the theoretical element after the last element.
s.end();

count() – returns true or false based on whether the element is present in the set or not.
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true

clear() – deletes all the elements in the set.
s.clear();

find() – to search an element in the set.
set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;

erase() – to delete a single element or elements between a particular range.
s.erase();*/
int n;
set <int> s;
for(int i=0;i<10;i++){
    cin >> n;
    s.insert(n);
}
for(auto i=s.begin();i!=s.end();i++){
cout << *i << " ";
}
if(s.empty() == true){
    cout << " the set is empty ";
}
else{
    cout << " the set is not empty ";
}
}