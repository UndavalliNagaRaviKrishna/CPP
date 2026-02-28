//C++ Logic to find the Lowest Element in given vector

 #include <iostream>
 #include <vector>

 using namespace std;

 int main() {
 vector<int> vec={7, 2, 3, 9, 4, 5, 8, 1};
 int len=vec.size(), low=100;
 for(int i=0;i<len;i++)
 {
 if(low>vec[i])
 {
 low=vec[i];
 }
 }
 cout<<"Lowest Element is: "<<low;
 }