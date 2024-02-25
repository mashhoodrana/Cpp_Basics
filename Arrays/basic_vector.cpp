#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout << "\n\n\n";


    vector<int> v2 (3, 50);
    swap(v, v2);

    for(auto element:v)
    {
        cout << element << " \n";
    }
    cout << endl;

    for(auto element:v2)
    {
        cout << element << " ";
    }
}    
