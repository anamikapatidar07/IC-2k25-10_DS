

#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> cars;
    
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
     
    cout<<cars.top();

    return 0;
}
// OUTPUT
// Ford
