#include <iostream>
#include <vector>
#include <string> 
#include <set>
#include <regex>
#include <map>
using namespace std;

map<char, int> getDictFromString(const string& s) {
	map<char, int> d;
	for (auto& c : s) {
		d.count(c) ? d[c]++ : d[c] = 1;

	}
	return d;
}

bool isanagram(const string& s1, const string& s2) {

}

int main() {
	string c = "live";
	string d = "evil";
	
