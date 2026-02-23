// C++ Logic to remove the Element in a vector By using data
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vec={1,2,3,4,5,6,7,8,9};
    int data=0, len=vec.size();
    cout<<"Enter the data to remove:";
    cin>>data;
    
    for(int i=0;i<len;i++)
    {
        if(data==vec[i])
        {
            for(int j=i;j<len;j++)
            {
                vec[j]=vec[j+1];
            }
            len--;
        }
    }
    if(len==vec.size())
    {
        cout<<"The user data is not found"<<endl;
    }
    for(int i=0;i<len;i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
