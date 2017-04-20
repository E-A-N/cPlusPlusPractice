#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(std::string s1, std::string s2)
{
  std::sort(s1.begin(), s1.end());
  std::sort(s2.begin(), s2.end());
  return s1 == s2;
}

int main(){
    string s1;
	  string s2;
	
  getline (cin, s1);
  getline (cin, s2);
	cout << "Enter the first string:";
	
	cout << "Enter the second string: ";

	
	if(isAnagram(s1,s2)) {
		cout << s1 << " is an anagram of " << s2 << endl;
	}
	
	return 0;
}
