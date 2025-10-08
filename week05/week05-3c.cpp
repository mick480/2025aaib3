/// week05-3c.cpp
/// CPE 這次的第2項 UVA 483 word scramble 把字弄反
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while(getline(cin, line)){
    /// 讀入1行 一直讀，讀到ctrl-z才結束
        stringstream ss(line);
        string word;
        ss >> word;
        reverse(word.begin(), word.end());
        cout << word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << " " << word;
        }


        cout << endl;///先隨便印出來
    }


}
