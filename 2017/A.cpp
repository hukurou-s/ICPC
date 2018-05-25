#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n, m;
  vector<int> a(1000);
  int tmp;
  int k, i;
  int max = 0;

  while (1) {

    cin >> n >> m;
    if ( n == 0 && m == 0 ) { break; }

    for ( k = 0; k < n; k++ ) {
      cin >> a[k];
    }
    sort(a.begin(), a.begin()+n);

    for ( k = n-1; k > 0; k-- ) {
      //if ( a[k] < m/2 ) { break; }
      for ( i = k-1; i >= 0; i-- ) {
        tmp = a[k]+a[i];
        if ( tmp <= m ) {
          if ( tmp > max ) {
            max = tmp;
          }
          break;
        }
      }
    }

    if ( max != 0 ) {
      cout << max << endl;
    } else {
      cout << "NONE" << endl;
    }

    max = 0;
  }
}
