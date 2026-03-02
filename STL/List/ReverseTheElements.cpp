// C++ Logic to Reverse the elements in a List(STL)
#include <iostream>
#include <list>

using namespace std;

int main() 
{
    list<int> l={1,2,3,4,5};
    int len=l.size();

    cout<<"Before Reverse"<<endl;
    
    for(auto x:l)
    {
        cout<<x<<" ";
    }
    
    auto first=l.begin();
    auto last = prev(l.end());

    for(int x=0;x<(len/2);x++)
    {
         int temp = *first;
        *first = *last;
        *last = temp;   

        ++first;
        --last;
    }
    cout<<'\n'<<"After Reverse"<<endl;
    for(auto x:l)
    {
        cout<<x<<" ";
    }
}
