// C++ Logic to show Parameterized constructor
#include <iostream>
using namespace std;

class stu
{
    public:
      int value=0;
    
        stu(int val)
        {
            value=val;
        }
};

int main() {
    stu obj(10);
    cout<<obj.value<<endl;
}
