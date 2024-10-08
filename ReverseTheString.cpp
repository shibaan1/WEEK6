#include<iostream>
using namespace std;

void reverseString(char *str) {
    int length = 0;
    char *ptr = str;

    // calculate the length of the string
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    ptr--; // move to the last character

    char *start = str;
    char *end = ptr;

    // swap characters from start and end
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Original string: " << str << endl;

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
