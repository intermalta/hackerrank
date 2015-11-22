#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> maxSumCon(const vector<int>& ar)
{
    int max_sum = ar[0];
    int max_ending_here = ar[0];
    int max_sum_ncon = ar[0];
    
    for (int i = 1; i < ar.size(); i++)
    {
        max_ending_here = max(ar[i], max_ending_here + ar[i]);
        //cout << ar[i] << " " << max_ending_here << endl;
        max_sum = max(max_sum, max_ending_here);
        max_sum_ncon = max(ar[i] + max_sum_ncon, max(ar[i], max_sum_ncon));
        
    }
    
    return make_pair(max_sum, max_sum_ncon);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int nums;
        vector<int> ar;
        cin >> nums;
        while (nums--)
        {
            int el;
            cin >> el;
            ar.push_back(el);
        }
        auto sum = maxSumCon(ar);
        cout << sum.first << " " << sum.second << endl;
    }
    return 0;
}
