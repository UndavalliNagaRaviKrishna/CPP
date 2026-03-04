// C++ Logic to show default constructor

#include <iostream>
using namespace std;

class Example
{
    public:
      int value;

    Example()
    {
        value=10;
    }
};

int main() {
    Example obj;
    cout<<obj.value<<endl;
}
