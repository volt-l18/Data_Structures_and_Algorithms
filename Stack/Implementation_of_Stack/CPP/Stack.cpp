#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> stackint;
    stackint.push(48);
    stackint.push(67);
    stackint.push(238);
    stackint.push(9);

    while (!stackint.empty()) {
    cout << stackint.top() <<endl;
    stackint.pop();
    }

    stackint.push(53);
    stackint.push(67);
    stackint.push(213);
    stackint.push(91);

    while (!stackint.empty()) {
    cout << stackint.top() <<endl;
    stackint.pop();
    }

    return 0;
}

