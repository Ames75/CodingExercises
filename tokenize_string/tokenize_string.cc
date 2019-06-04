#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;

template<class T>
void printContent(const T& container, int numElemsPerLine = 4){
    int count = 0;
    for (auto elem : container) {
        cout << elem; 
        cout << (++count % numElemsPerLine == 0?"\n":" " );
    }
    cout << endl;
}

void tokenizeLine(const string& line, 
                       vector<string>& result) {
    char* tmp = strdup(line.c_str());
    char* token = strtok(tmp, " ,;");
    while (token) {
        result.push_back(string(token));
        token = strtok(nullptr, " ,;");
    }
    free(tmp);
}

void tokenizeTextFile (ifstream& ifs, 
                              vector<string>& result ) {
    string line;
    while(getline(ifs, line) ) {
        tokenizeLine(line, result);
    }

}

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "usage: tokenize_string <input file>" << endl;
    }
    ifstream inputStream(argv[1]);
    if ( !inputStream.is_open() ) {
        cerr << "Unable to open " << argv[1] << endl;
    }
    vector<string> result;
    tokenizeTextFile(inputStream, result);
    printContent(result);
    inputStream.close();
}
