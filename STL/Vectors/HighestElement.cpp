//C++ Logic to find the highest Element in given vector
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    vector<int> vec={1,2,3,4,5,6,7};
    int len=vec.size(), high=0;
    for(int i=0;i<len;i++)
    {
        if(high<vec[i])
        {
            high=vec[i];
        }
    }
    cout<<"Highest Element is: "<<high;
}
