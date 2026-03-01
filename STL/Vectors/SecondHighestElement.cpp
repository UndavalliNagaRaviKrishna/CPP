//C++ Logic to find the Second Highest Element in given vector only for positive Integers
 #include <iostream>
 #include <vector>

 using namespace std;

 int main() {
 vector<int> vec={7, 2, 3, 9, 4, 5, 10, 1};
 int len=vec.size(), first_high=0, second_high=0;
 for(int i=0;i<len;i++)
 {
 if(first_high<vec[i])
 {
 first_high=vec[i];
 }
 }
 for(int i=0;i<len;i++)
 {
 if(((second_high<vec[i]) && (vec[i]<first_high)))
 {
 second_high=vec[i];
 }
 }
 cout<<"First Highest Element is: "<<first_high<<endl;
 cout<<"Second Highest Element is: "<<second_high;
 }