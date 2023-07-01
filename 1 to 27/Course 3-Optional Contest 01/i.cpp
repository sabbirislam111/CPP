#include <iostream>
using namespace std;

int main()

{
    int a, b;
    cin>>a>>b;
    string str[b], temp;

    for(int i = 0; i < a; ++i)
    {
        for(int j = 0; j < b; j++){
            getline(cin, str[j]);
        }

    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < b; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
