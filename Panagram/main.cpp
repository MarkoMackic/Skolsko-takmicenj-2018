#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<char> slova;
    vector<char> finalno;
    for(char i='a';i<='z';i++){
        slova.push_back(i);
    }

    string recenica;
    getline(cin, recenica);

    for(char &c:recenica){
        if((int)c < 95){
                c = c + 32;
        }
        if(find(slova.begin(), slova.end(), c) != slova.end()){
            if(find(finalno.begin(),finalno.end(), c) == finalno.end()){
                finalno.push_back(c);
            }
        }
    }

    if(finalno.size() == slova.size()){
        cout << "Jeste pangram" << endl;
    }else{
        cout << "Nije pangram" << endl;
    }

    return 0;
}
