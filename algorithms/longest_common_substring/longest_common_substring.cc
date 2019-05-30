#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest_common_substring(const string& s1, const string& s2) {
    string result;
    if (s1.empty() || s2.empty()) return result;
    size_t longest_len =  0;
    vector<size_t> len_vec(s2.size(), 0);
    for (int i = 0; i < s1.size(); i++) {
        size_t prev = 0;
        for (int j = 0; j < s2.size(); j++) {  
            int tmp = prev;
            if( s1[i] == s2[j] ) {
                tmp++;
            } else {
                tmp = 0;
            }
            if(tmp >  longest_len) {
                result = s2.substr(j-tmp+1, tmp);
                longest_len = tmp;
            }
            prev = len_vec[j];
            len_vec[j] = tmp; 
        }
    }
    
    return result;

}



int main (int argc, char** argv) {
    string s1, s2;
    cout << "please enter first string" << endl;
    cin >> s1;
    cout << "second string" << endl;
    cin >> s2;
    cout << "echoing: " << s1 << " " << s2 << endl;
    cout << "longest substring is  " << longest_common_substring(s1, s2)
         << endl;;
    return 0;
}
