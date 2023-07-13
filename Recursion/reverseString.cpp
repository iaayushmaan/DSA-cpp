#include <iostream>
#include <string.h>
using namespace std;

// void reverse(string s){
//     if(s.length()==0) return;
//     string r= s.substr(1);
//     reverse(r);
//     cout<<r[0];
// }

void reverse(string& s, int i, int j)
{
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);
     
}

int main()
{
    string s = "abcdef";
    int i = 0, j = s.length() - 1;

    reverse(s, i, j);
     cout<<s<<endl;
  
}