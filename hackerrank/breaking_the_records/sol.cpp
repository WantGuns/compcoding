#include <iostream>
using namespace std;

int main() {
    int games;
    cin >> games;
    int score[games], max = 0, min, cmax = 0, cmin = 0;
    for (int i = 0; i < games; i++) 
        cin >> score [i];
    min = score[0];
    for (int j = 1; j <= games; j++) {
        if (score[j-1] > score[j] && score[j-1] > max) {
            cmax++;
            max = score[j-1];
        }
        if (score)
    }
}
