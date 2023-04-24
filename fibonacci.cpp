#include <iostream>

int main() {
    long x = -1, y = 1, nth, next;
    cout << "Enter a nth term : ";
    cin >> nth
    for (int z = 1; z <= nth; z++){
        next = x + y;
        x = y;
        y = next;
    }
    cout << nth<< "term of fibonacci sequence is "<< next;
    return 0;
}