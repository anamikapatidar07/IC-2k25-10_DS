#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> cars;
    
    cars.push("Volvo");
    cars.push("Ford");
    cars.push("BMW");
    
   cout<< cars.size();
    return 0;
}

//OUTPUT
// 3
