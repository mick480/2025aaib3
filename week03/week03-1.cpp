/// week03-1.cpp
/// c++ �}�C vector<int>
#include <iostream> /// cin cout �n�Ϊ�
#include <vector> /// ���Ѫ��D�D �}�C vector
using namespace std;
int main()
{
    cout << "�п�J 4 �ӼƦr: ";
    vector<int> a; /// �u���Y�ۦp�v���}�C
    int now;
    for(int i=0; i<4; i++){
        cin >> now; /// �{�b��J1�ӼƦr
        a.push_back(now); /// ����a���̫᭱
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << "�{�b�{���X�̡A�S���H 99 88 ��ӼƦr�A���G�O?\n";
    a.push_back(99); /// ����a���̫᭱
    a.push_back(88);
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' '; /// �Ʀr�᭱�A���Ů�
    }

}
