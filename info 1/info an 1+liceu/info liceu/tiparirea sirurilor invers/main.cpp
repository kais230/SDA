#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream f("a.txt");

int inv(int i, char n[100])
{
  if(i==0) return 1;
  else return i-1;
  cout<<n[i];

}
int main()
{
char s[100];
f.get(s,100);

inv(strlen(s),s);

    return 0;
}
