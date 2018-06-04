#include <iostream>
#include "Stek.h"
using namespace std;
int main() {

    Stek <int> st(7);

    for (int i = 1; !st.Is_full(); i++) {
        st.Push(i);
        cout << i << endl;
    }
    cout << "\n\n====================\n\n";
    for (int i = 1; !st.Is_empty(); i++)
        cout << st.Pop() << endl;

    cout << "\n\n";

    string mas[4] = {"first","second","third","last"};

    Stek <string> st2(4);

    for (int i = 0; !st2.Is_full(); i++) {
        st2.Push(mas[i]);
        cout << mas[i] << endl;
    }
    cout << "\n\n====================\n\n";
    for (int i = 0; !st2.Is_empty(); i++)
        cout << st2.Pop() << endl;



}