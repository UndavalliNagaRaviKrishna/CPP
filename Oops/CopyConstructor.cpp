// C++ Logic to show Copy constructor
 #include <iostream>
 using namespace std;

class Employee
 {
 public:
 int EmpId;

 Employee(int Id)
 {
 EmpId=Id;
 }
 Employee(const Employee& obj)
 {
 EmpId=obj.EmpId;
 }
 };

int main() {
 Employee n1(124);
 Employee n2=n1;
 cout<<n2.EmpId<<endl;
 }