#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string dane;
    int n;
    cout << "Dane ilu osob chcesz wpisac?";
    cin >> n;
 ofstream myfile ("Dziennik.txt");
 for(int i=0;i<n+1;i++){
    getline(cin, dane);
    if(dane == ""){
        continue;
    }
    dane = dane+"\n";    
    if (myfile.is_open())
 {
    myfile << dane;
 }
 else cout << "Unable to open file";
 }
myfile.close();
 return 0;
}