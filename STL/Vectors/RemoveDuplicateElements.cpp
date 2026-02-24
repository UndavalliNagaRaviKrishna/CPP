//C++ Logic to remove the Duplicate Element in a vector
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    vector <int> vec={1,2,3,4,2,5,2,6,7,3,8,4,9};
    int len=vec.size();
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(vec[i]==vec[j])
            {
                for(int k=j;k<len;k++)
                {
                    vec[k]=vec[k+1];
                }
                len--;
                j--;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<vec[i]<<" ";
    }
 
    return 0;
}
