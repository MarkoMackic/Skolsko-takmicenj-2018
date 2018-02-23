#include <iostream>

using namespace std;

int main()
{
    char c;
    int arr[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int d1,m1,y1;
    cin >> d1 >> c >> m1 >> c >> y1;

    int total = 0;
    for(int i=0;i<m1-1;i++){
        if(i == 1){ // samo februar
            if(y1 % 100 == 0){
                if(y1 % 400 == 0){
                    total+=1;
                }
            }else{
                if(y1 % 4 == 0){
                    total+=1;
                }
            }
        }
        total += arr[i];
    }
    total += d1;
    cout << total << endl;
    return 0;
}
