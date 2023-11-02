#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool displayRun(int values[], int size);

int main(void) {
    srand(static_cast<unsigned>(time(0)));
    int size = 20;
    int values[20];


    if (displayRun(values, size)) {
        cout << "has run: ";
    }
    else {
        cout << "no run: ";
    }
 
    for (int i = 0; i < size; i++) {
        values[i] = (rand() % 6) + 1;
        cout << values[i] << " ";
    }

    return 0;
}

bool displayRun(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] == values[i + 1]) {
            return true;
        }
    }
    return false;
}
