#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; /*
2 1 3
next: 2 3 1
      3 1 2
      3 2 1

prev: 1 2 3
      1 3 2
*/

struct Student{
  string name; // fields
  int age;
  double gpa;

  void read(){
    cin >> name >> age >> gpa;
  }

  void show(){ // method, function
    cout << name << " " << age << " " << gpa << endl;    
  }
};

int main(){
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  int n;
  cin >> n;
  Student s[n];
  for(int i = 0; i < n; i++)
    s[i].read();

  cout << n << endl;
  for (int i = 0; i < n; i++)
    s[i].show();

  return 0;
}