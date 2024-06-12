#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if (cnt == M) {
      // Print
      for (int i = 0; i < vec.size(); i++) {
          cout << vec[i] << " ";
      }
      cout << endl;
      return;
   }

   int last_num = 0;
   if (vec.size() > 0) {
       last_num = vec[vec.size() - 1];
   }

   for (int i = last_num + 1; i <= (N - M + 1 + cnt); i++) {
       vec.push_back(i);
       func(cnt + 1);
       vec.pop_back();
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
