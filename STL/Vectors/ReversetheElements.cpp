//C++ Logic to reverse the Element in a vector 

#include <iostream> 
#include <vector> 

using namespace std; 
int main() 
{ 
   vector<int> vec={1,2,3,4,5,6}; 
   int len=vec.size(); 
   int temp=0; 
   cout<<"Before Reverse: "; 
   for(int i=0;i<len;i++) 
   { 
      cout<<vec[i]<<" "; 
   } 

   for(int i=0;i<(len/2);i++) 
   { 
      temp=vec[i]; 
      vec[i]=vec[len-i-1]; 
      vec[len-i-1]=temp; 
   } 

    cout<<'\n'<<"After Reverse: "; 
    for(int i=0;i<len;i++) 
    { 
       cout<<vec[i]<<" "; 
     } 

 return 0; 
}
