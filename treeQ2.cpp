#include <iostream>
#include <cstdlib>
#include <ctime>

#define Macase 10

using namespace std;

int data[10] = {1, 3, 0, -3, 5, 2, 100, 10, 4, 6};

int number(int f, int e) {
    int result;
    while (true) {
        result = rand() % e;
        if (result >= f)
            return result;
    }
}

void Tree(int F, int E, int *tab) {
    if (F < E) {
        int paint = number(F, E);
        int temp;

        int i = F;
        int j = E;

        while (i <= j) {
            while (tab[i] < paint)
                i++;
            while (tab[j] > paint)
                j--;
            if (i <= j) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
                i++;
                j--;
            }
        }

        // Recursive calls for the two partitions
        Tree(F, j, tab);
        Tree(i, E, tab);
    }
}

void aff(int *tab) {
    for (int i = 0; i < Macase; i++) {
        cout << *(tab + i) << " ";
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    aff(data);
    cout << endl;
    Tree(0, 9, data);
    aff(data);
    return 0;
}

