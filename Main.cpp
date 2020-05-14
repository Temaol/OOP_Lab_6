
#include <iostream>
#include "MyArrey.hpp"

using namespace std;

int main()
{
    Arrey<int> ar(4);
    ar.AddElem(15, 0);
    ar.AddElem(9, 1);
    ar.AddElem(7, 2);
    ar.AddElem(12, 3);
    cout << ar << endl;
    cout << "control sum " << ar.GetControlSum()<<endl;
}
