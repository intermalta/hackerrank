//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//
//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int test = 0;
//    std::ios_base::sync_with_stdio(false);
//    cin >> test;
//    while (test--) {
//        string a, b;
//        int ind_a = 0, ind_b = 0;
//        cin >> a >> b;
//        string::iterator p1 = a.begin();
//        string::iterator p2 = b.begin();
//        for (; p1 != a.end() || p2 != b.end();) {
//            if (p1 == a.end()) {
//                cout << b.substr(ind_b); //*p2++;
//                ++ind_b;
//                //continue;
//                break;
//            }
//            if (p2 == b.end()) {
//                cout << a.substr(ind_a);//*p1++;
//                ++ind_a;
//                //continue;
//                break;
//            }
//            if (*p1 < *p2) {
//                cout << *p1++;
//                ++ind_a;
//            }
//            else if (*p2 < *p1) {
//                    cout << *p2++;
//                    ++ind_b;
//            }
//            else {
//                int equals = 0;
//                //char pivot = *p1;
//
//                while ((p1 + equals != a.end() || p2 + equals != b.end()) && *(p1 + equals) ==  *(p2 + equals)) {
//                    equals++;
//                }
//
//                if ((p1 + equals != a.end()) && *(p1 + equals) < *(p2 + equals)) {
//                    cout << a.substr(ind_a, ind_a + equals - 1);
//                    p1 += equals;
//                    ind_a += equals;
//                }
//                else if (p2 + equals != b.end() && *(p2 + equals) < *(p1 + equals)) {
//                    cout << b.substr(ind_b, ind_b + equals - 1);
//                    p2 += equals;
//                    ind_b += equals;
//                }
//                else {
//                    if (p1 + equals == a.end() && p2 + equals != b.end())
//                    {
//                        cout << *p2++;
//                        ++ind_b;
//                    }
//                    else if (p2 + equals == b.end() && p1 + equals != a.end())
//                    {
//                        cout << *p1++;
//                        ++ind_a;
//                    }
//                    else {
//                        cout << *p1++;
//                        ++ind_a;
//                    }
//                }
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
