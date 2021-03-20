#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // initializer list syntax
    vector<int> vec1 {5, 4, 3, 2, 1};

    // vec2 is a copy of vec1
    vector<int> vec2(vec1);

    // {-1, -1, -1, -1, -1}
    vector<int> vec3(5, -1);

    // begin(): Returns an iterator to the first element of the vector. If the vector is empty, the returned iterator will be equal to end().
    // end(): Returns an iterator to the element following the last element of the vector.
    // sort(): Sorts the elements in the range [first, last) in non-descending order. The order of equal elements is not guaranteed to be preserved.
    sort(vec1.begin(), vec1.end());

    // size(): Returns the number of elements in the container, i.e. std::distance(begin(), end()).

    vec1.insert(vec1.begin() + 2, vec3.begin(), vec3.end());
    // {1, 2, -1, -1, -1, -1, -1, 3, 4, 5}

    vec1.insert(vec1.begin(), 2, 10);
    // {10, 10, 1, 2, -1, -1, -1, -1, -1, 3, 4, 5}

    // push_back(): Appends the given element value to the end of the container.
    // pop_back(): Removes the last element of the container.

    for(int v : vec1) cout << v << " ";
    cout << "\n";

    return 0;
}