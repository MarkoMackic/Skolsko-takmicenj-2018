#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <array>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i%10 != 0){
            if(i % (i%10) == 0){
                cout << i << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
