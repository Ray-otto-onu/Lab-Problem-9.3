#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool displayRun(int values[], int size);
void hasRun(int values[], int size);

int main() {
    srand(static_cast<unsigned>(time(0)));
    int size = 20;
    int values[20];
    bool Run=0;
    bool i = true;

    while (i) {
        for (int i = 0; i < size; i++) {
            values[i] = (rand() % 6) + 1;
        }

        if (displayRun) {
            cout << "has run: ";
        }
        else
            cout << "no run: ";

        hasRun(values,size);
        cout << endl;
        if (displayRun)
        i=false;
    }
}

void hasRun(int values[], int size) {
    bool Run = false;

    for (int i = 0; i < size; i++) {
        if (Run) {
            if (values[i] != values[i - 1]) {
                cout << ") ";
                Run = false;
            }
        }

        if (i > 0 && values[i + 1] == values[i] && !Run) {
            cout << "(";
            Run = true;
        }

        if (Run == false){
            cout << values[i];
        cout << " ";
    }
        if (Run == true)
        {
            cout << values[i];
            if (values[i] == values[i+1])
                cout << " ";
        }
    }

    if (Run) {
        cout << ")";
    }
}

bool displayRun(int values[], int size) {
    bool Run = false;

    for (int i = 0; i < size; i++) {
        if (i > 0 && values[i] == values[i - 1] && !Run) {
            Run = true;
            return displayRun;
        }
    }
}