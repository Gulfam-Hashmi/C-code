#include <iostream>
#include <string>
#include <vector>

using namespace std;

void drawW(int size) {
    if (size < 3) size = 3;
    if (size > 10) size = 10;
	int collength = 4 * size - 3;
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < collength; ++col) {
            if (col == row || col == 2 * size - 2 - row || col == 2 * size - 2 + row || col == collength -1 - row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter size (3-10): ";
    cin >> size;
    drawW(size);
    return 0;
}