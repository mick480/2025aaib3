/// week02-2.cpp c++
/// 要用c++的字串 反過來
#include <iostream>
#include <string> ///字串外掛
using namespace std;
int main()
{
    cout << "請輸入數字: ";
    string a, ans;
    cin >> a;

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }///倒過來的迴圈

    cout << a<< ans;
}
