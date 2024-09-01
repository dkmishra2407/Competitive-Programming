#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Step 1: Create a mapping from polyhedron name to the number of faces
    unordered_map<string, int> polyhedron_faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    // Step 2: Read the number of polyhedrons
    int n;
    cin >> n;

    // Step 3: Initialize a variable to accumulate the total number of faces
    int total_faces = 0;

    // Step 4: Loop through each polyhedron and add the corresponding number of faces to the total
    for (int i = 0; i < n; ++i) {
        string polyhedron_name;
        cin >> polyhedron_name;
        total_faces += polyhedron_faces[polyhedron_name];
    }

    // Step 5: Print the total number of faces
    cout << total_faces << endl;

    return 0;
}
