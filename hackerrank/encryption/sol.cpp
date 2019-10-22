#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
          
    int length = 0, i = 0, j = 0, row, column;
    char check[82];
    while(s[i] != '\0') {
        if(s[i] != ' ') {
            check[j] = s[i];
            j++;
            length++;
        }
        i++;
    }
    row = floor(sqrt(length));
    column = ceil(sqrt(length));

  //  cout << "L, R, C = " << length << " " << row << " " << column << endl;

    for (j = 0; j < column; j++) {
        i = 0;
        while((column*i) + j < length) {
        cout<<check[(column*i) + j];
        i++;
    }
    cout<<" ";
    }     

    return 0;
}
