/// week05-2.cpp
/// 搞懂 stringstream
#include <iostream> /// 為了cin cout
#include <string> /// 為了字串 string
#include <sstream> /// (新的) string變stream的外掛
using namespace std; /// 為了不寫 string
int main()
{
    string line;
    getline (cin, line );
    cout << line;
    stringstream ss(line);
    string word;
    while(ss >> word){
        cout << "ss讀到1個字: " << word << endl;
    }


}
