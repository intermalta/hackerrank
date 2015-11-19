//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//int main() {
//    int n;
//    vector<int> numbers;
//    cin >> n;
//
//    while (n--)
//    {
//        int num;
//        cin >> num;
//        numbers.push_back(num);
//    }
//
//    sort(numbers.begin(), numbers.end());
//
//    int smallest = numeric_limits<int>::max();
//    for (int i = 1; i < (int)numbers.size(); i++)
//        if (numbers[i] - numbers[i - 1] < smallest)
//            smallest = numbers[i] - numbers[i - 1];
//
//    for (int i = 1; i < (int)numbers.size(); i++)
//        if (numbers[i] - numbers[i - 1] == smallest)
//            cout << numbers[i - 1] << " " << numbers[i] << " ";
//    cout << endl;
//    return 0;
//}