#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char** argv){

    cout << "File selected " << argv[1] << endl;
    
    for (int i=0; i<argc; ++i){
        cout << argv[i] << "\n";
    }
    
    // Body to open file and read from it
    string line;
    ifstream inFile ( argv[1] );
    if( inFile ){  
        
        // get first line of bookshelves
        getline( inFile, line );
        cout << line << endl;
        istringstream iss(line);
        vector<int> shelves;    
        int s;
        while( iss>>s ){        
            shelves.push_back(s);
        }
        int totalSpace = 0;
        for( int i=0; i<shelves.size(); ++i ){
            cout << "shelves["<<i<<"] " << shelves[i] << ' ';
            totalSpace += shelves[i];
        }
        cout << "\n" << "sum " << totalSpace << endl;
       

        // get all following lines of books titles and size
        // TODO: store title of the book ( possibly orded pair (int, str )
        vector<int> books;
        int b;
        while( getline( inFile, line ) ){
            cout << line << endl;
            istringstream iss(line);
            iss>>b;
            books.push_back(b);
        }
        for( int i=0; i<books.size(); ++i ){
            cout << "books[" << i << "]" << books[i] << endl;
        }
            
              
    }
    return 0;
}
