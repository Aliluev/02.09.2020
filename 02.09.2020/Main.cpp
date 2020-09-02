#include<iostream>
#include<string>
using namespace std;

int main()
{
  string a = "cever";
  string b = "ug";
  int c = 0;//счётчик
  int d = 0;//счётчик
  int e = 0;
  cout << "xochetsa tepla?"<<"\n";
  cout << "Da-1,Net-2" << "\n";
  cin >> e;
  if (e = 1)
  {
    c++;
  }
  else
  {
    d++;
  }
  cout << "lubish guliat nochiyu?" << "\n";
  cout << "Da-1,Net-2" << "\n";
  cin >> e;
  if (e = 1)
  {
    c++;
  }
  else
  {
    d++;
  }
  cout << "lubish sneg?" << "\n";
  cout << "Da-1,Net-2" << "\n";
  cin >> e;
  if (e = 2)
  {
    c++;
  }
  else
  {
    d++;
  }
  cout << "lubish xhodit v goru??" << "\n";
  cout << "Da-1,Net-2" << "\n";
  cin >> e;
  if (e = 2)
  {
    c++;
  }
  else
  {
    d++;
  }
  cout << "lubish mnogo ludey?" << "\n";
  cout << "Da-1,Net-2" << "\n";
  cin >> e;
  if (e = 1)
  {
    c++;
  }
  else
  {
    d++;
  }
  if (c > d)
  {
    cout << b;
  }
  else
  {
    cout << a;
  }
  return 0;
}