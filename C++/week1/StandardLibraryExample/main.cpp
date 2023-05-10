#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{


    vector<int> container;
    vector<int>::iterator position;

    container.push_back(2);
    container.push_back(8);
    container.push_back(1);
    container.push_back(3);
    container.push_back(5);



    for(position=container.begin();position!=container.end();++position)
    {
        cout<< *position << ' ';
    }
    cout<<endl;

    position = min_element(container.begin(),container.end());
    cout<<"min element of container = "<< *position <<endl;

    position = max_element(container.begin(),container.end());
    cout<<"max element of container = "<< *position <<endl;

    sort(container.begin(),container.end());

    for(position=container.begin();position!=container.end();++position)
    {
        cout<< *position << ' ';
    }
    cout<<endl;


    return 0;
}
