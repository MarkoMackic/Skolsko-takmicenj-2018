#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrica[n][n];
    for (int i=0;i<n;i++){
        for(int i1=0;i1<n;i1++){
            matrica[i][i1] = 0;
        }
    }

    int c = n / 2;

    if(n % 2 == 0){
        int x = 0;
        int y = 0;
        for(int i=1;i<=c;i++){
            matrica[y][x] = i;
            matrica[n-1-y][n-1-x] = i;
            x++;
            y++;
        }
        x = n-1;
        y = 0;
        for(int i=1;i<=c;i++){
            matrica[y][x] = i;
            matrica[x][y] = i;
            y++;
            x--;
        }

    }else{
        int x = floor(n/2);
        int y = 0;

        for(int i=1;i<=c+1;i++){
            matrica[y][x] = i;
            matrica[x][y] = i;
            y++;
        }
        matrica[x][y] = c+1;
        for(int i=c;i>=1;i--){
            matrica[y][x] = i;
            matrica[x][y] = i;
            y++;
        }
    }
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            cout << matrica[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}
