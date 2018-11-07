#include <iostream>
using namespace std;
void star(int t){
  for(int j=1;j<=t;j++)
      cout << "*";
}

int main() {
  cout << "Hello World!\n";
  int n, t=1;
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-t;j++)
      cout << " ";
    star(t);
    cout << "    ";
    star(t);
    cout << "\n";
    t++;
  }
  
}
