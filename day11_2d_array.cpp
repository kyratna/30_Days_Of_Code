#include <bits/stdc++.h>

using namespace std;

int hourglass(vector<vector <int>> a){
    int sum=0;
    int maxsum = INT_MIN;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            sum = a[i][j] + a[i-1][j] + a[i-1][j-1] + 
            a[i-1][j+1] + a[i+1][j] + a[i+1][j-1] + a[i+1][j+1];

            maxsum = max(sum, maxsum);
        }
        
    }
    return maxsum;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ans = hourglass(arr);
    cout << ans;
    
    return 0;
}
