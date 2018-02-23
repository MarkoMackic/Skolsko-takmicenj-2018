#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arm = 0;
    for(int i=a;i<=b;i++){
        string temp =to_string(i);
        float total = 0;
        for(char &c:temp){
            total+= pow((float)c - '0',(float)temp.length());
        }
        if (total == stof(temp)){
            cout << temp << " jeste Armstrongov" << endl;
            arm++;
        }
    }
    cout << "Ima ih " << arm << endl;
    return 0;
}
