/// week02-2.cpp c++
/// �n��c++���r�� �ϹL��
#include <iostream>
#include <string> ///�r��~��
using namespace std;
int main()
{
    cout << "�п�J�Ʀr: ";
    string a, ans;
    cin >> a;

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }///�˹L�Ӫ��j��

    cout << a<< ans;
}
