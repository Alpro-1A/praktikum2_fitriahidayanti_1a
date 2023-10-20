#include <iostream>

using namespace std;

int main()
{
   int a, l, m, i;

   cout << "jumlah bebek=";
   cin >> a;
   cout << "jumlah orang=";
   cin >> l;

   m=a/l;
   i=a%l;

   cout << "jumlah bebek yang akan dibagikan perorang=" <<m << endl;
   cout << "jumlah sisa bebek " <<i << endl;

    return 0;
}
