/// week07-1a.cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step01: Input
    for(int i=1; i<2*n; i++){ ///Step03: for回圈, 樓層
        for(int j=1; j<2*n; j++){
            if(j>1) cout << " ";
            cout << n;
        }
        cout << "現在是i樓, i:" << i;
        cout << endl;

    }


}
