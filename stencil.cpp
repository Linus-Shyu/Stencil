/*
  ______          __    _   __              __     __    _                     _____ __               
 /_  __/__  _____/ /_  / | / /__  _________/ /    / /   (_)___  __  _______   / ___// /_  __  ____  __
  / / / _ \/ ___/ __ \/  |/ / _ \/ ___/ __  /    / /   / / __ \/ / / / ___/   \__ \/ __ \/ / / / / / /
 / / /  __/ /__/ / / / /|  /  __/ /  / /_/ /    / /___/ / / / / /_/ (__  )   ___/ / / / / /_/ / /_/ / 
/_/  \___/\___/_/ /_/_/ |_/\___/_/   \__,_/____/_____/_/_/ /_/\__,_/____/   /____/_/ /_/\__, /\__,_/  
                                         /_____/                                       /____/         
*/

#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

typedef long l;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int uint;

#define endl '\n'

int small_number_count;
double small_number;
#define small cout << fixed << setprecision(small_number_count) << small_number; 

using namespace std;

template<class T> void read(T &x) {
    x = 0; T f = 1; char c = getchar();
    for (; !isdigit(c); c = getchar()) if (c == '-') f = -1;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - 48; x *= f;
}

template<class T> void write(T x) {
    if (x > 9) write(x / 10); putchar(x % 10 + 48);
}

template<class T> void print(T x,char ed = '\n') {
    if(x < 0) putchar('-'), x = -x; write(x), putchar(ed);
}

void solve()
{
  /* Start Your Show Linus Shyu */

  //int small_number_count = ;
  //double small_number = ;
  //small;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //int T;
    //cin >> T;
    int T = 1;
    for(int i = 1; i <= T; i++)
    {
      solve();
    }
    return 0;
}
