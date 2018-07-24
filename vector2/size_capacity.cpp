// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;
// A vector size is the number of elements currently in the vector and Vector capacity is the space allocated for elements which doubles.
// The vector's capacity is not explicitly allocated at the start of the program, to ensure that elements are allocated enough space, at run time 
// the capacity has to change
int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() 
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size() 
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}
