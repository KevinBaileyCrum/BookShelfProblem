#include <iostream>
using namespace std;

// get arguments
    // first line will contain availble shelfs of size sz seperated by space
    // all follwoing lines will contain book collections with
    // SZ followed by title\n   

int main(int argc, char** argv){
    cout << " You Have Entered " << argc
         << " arguments:" << "\n";

    for (int i=0; i<argc; ++i){
        cout << argv[i] << "\n";
    }

    return 0;
}
