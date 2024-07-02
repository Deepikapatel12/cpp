#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cout<<"Enter number\n";
    cin >> number;          //position of prime number
    int a[number];
    a[0] = 2;
    a[1] = 3;
    int top = 1;
    if (number <= 2) {
        cout << a[number - 1] <<"\n";
    } else {
        for (int i = 5; i <= 10001; i+= 2) {
            for (int j = 0; j <= top; j++) {

                if (i % a[j] != 0) {
                    count++;

                }
                if (count == (top + 1)) {
                    a[++top] = i;
                    if ((count + 1) == number) {
                        cout << a[top];
                        break;
                    }

                }

            }

        }

    }
   // return 0;
}

