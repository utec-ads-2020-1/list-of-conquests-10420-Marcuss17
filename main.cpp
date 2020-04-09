#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<string,int> Map;
typedef pair<string,int> Pair;

int main(){
    int numCases;
    string country, restOfLine;
    Map countries;
    cin >> numCases;
    while(numCases > 0){
        cin >> country;
        getline(cin, restOfLine);
        auto it = countries.find(country);
        if(it  == countries.end()){
            countries.insert(Pair(country,1));
        }else{
            (*it).second++;
        }
        numCases--;
    }
    for(auto it: countries){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

