#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// get arguments
    // first line will contain availble shelfs of size sz seperated by space
    // all follwoing lines will contain book collections with
    // SZ followed by title\n   

int main(int argc, char** argv){

    cout << "File selected " << argv[1] << endl;
    
    for (int i=0; i<argc; ++i){
        cout << argv[i] << "\n";
    }
    
    // Body to open file and read from it
    string line;
    ifstream inFile ( argv[1] );
    if( inFile ){ // same as: (inFile.good()) basically not EOF
        
        getline( inFile, line );
        cout << line << endl;
        
        //cout << "try line[0] " << line[0] << line[1] << endl;
        istringstream iss(line); // string steam iss takes in current line
        vector<int> shelves;    
        int s;
        while( iss>>s ){        // while we can push new ints from iss ont s
            shelves.push_back(s);
        }
        for( int i=0; i<shelves.size(); ++i ){
            cout << "shelves["<<i<<"] " << shelves[i] << ' ';
        }
        cout << "\n";
    
    }
    return 0;
}
