#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// get arguments
    // first line will contain availble shelfs of size sz seperated by space
    // all follwoing lines will contain book collections with
    // SZ followed by title\n   

int main(int argc, char** argv){
    // Body to catch which file is being parsed 
    cout << "File selected " << argv[1] << endl;
    
    for (int i=0; i<argc; ++i){
        if( argv[i] == "\n") { cout << "nl found at " << argv[i] << endl; }
        cout << argv[i] << "\n";
    }
    
    // Body to open file and read from it
    string line;
    ifstream inFile ( argv[1] );
    if( inFile ){ // same as: (inFile.good()) basically not EOF
        getline( inFile, line );
        cout << line << endl;
    }
    return 0;
}
