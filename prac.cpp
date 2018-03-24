#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateNumShelves( vector<int> &shelves, int bookSum ){
    int accum = 0;
    int count = 0;
    for( int i=shelves.size() -1; i>=0; --i ){
        if( accum >= bookSum ) break;
        accum += shelves[i];
        ++count;
    }
    cout<<"accum is "<<accum<<endl;
    cout<<"count is "<<count<<endl;
    return accum;
}

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
        sort( shelves.begin(), shelves.end() );
        int totalSpace = 0;
        for( int i=0; i<shelves.size(); ++i ){
            cout << "shelves["<<i<<"] " << shelves[i] << ' ';
            totalSpace += shelves[i];
        }
        cout << "\n" << "sum " << totalSpace << endl;
       

        // get all following lines of books titles and size
        // TODO: store title of the book 
        //      ( possibly orded pair (int, str ) )
        vector<int> books;
        int b;
        int bookSum =0; 
        while( getline( inFile, line ) ){
            cout << line << endl;
            istringstream iss(line);
            iss>>b;
            bookSum += b;
            books.push_back(b);
        }
        cout<<"bookSum = "<< bookSum << endl;
        for( int i=0; i<books.size(); ++i ){
            cout << "books[" << i << "]" << books[i] << endl;
        }
         
        calculateNumShelves( shelves, bookSum );      
    }
    return 0;
}
