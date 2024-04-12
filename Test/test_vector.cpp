#include "../Container/Vector.hpp"
#include "../Functor/Functor.hpp"
#include <iostream>
using namespace std;

int main()
{
    
    Vector<int> vec;
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    cout << "vec size: " << vec.size() << endl;
    cout << "Sort before vec element: ";
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    } 

    cout << endl;

    Sort(&vec[0], &vec[2]);

    cout << "Sort after vec element: ";
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    } 
    cout << endl;


    return 0;
}