#include <iostream>
using namespace std;

namespace KJ
{

void print(string s)
{
    cout << "namespace KJ prints: "<< s << endl;
}

}

void print(string s)
{
    std::cout << "Outside KJ namespace:"<< s << endl;
}

int main()
{
    print("HUUHAA!!!");
    print("This works also!!!");
    KJ::print("Huuhaa");
    return 0;
}
