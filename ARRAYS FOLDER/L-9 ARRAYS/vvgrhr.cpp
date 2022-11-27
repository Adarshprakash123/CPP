#include <iostream>
#include <cstring>
using namespace std;


void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='c'){
            continue;
        }
    }
    cout<<input[i];
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}
