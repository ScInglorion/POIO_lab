#include <iostream>
using namespace std;
template <class T>
T GetMax (T a, T b) {

 T result;
 result = (a>b)? a : b;
 return (result);
}
int main () {
 int i=5, j=6, k;
 long l=10, m=5, n;
 float a=3.14, b=9.81, c;
 double e = 5.4242, f =34.1413, g;
 k=GetMax<int>(i,j);
 n=GetMax<long>(l,m);
 c=GetMax<float>(a,b);
 g=GetMax<double>(e,f);
 cout << k << endl;
 cout << n << endl;
 cout << c << endl;
 cout << g << endl;
 return 0;
}
