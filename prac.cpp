#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateNumShelves( vector<int> &shelves, int bookSum, int count){
    int accum = 0;
    for( int i=shelves.size() -1; i>=0; --i ){
        if( accum >= bookSum ) break;
        accum += shelves[i];
        ++count;
    }
    if( accum < bookSum ){ count = -1;}
    return count;
}

int main(int argc, char** argv){
    
    // Check cmndln arg for correct length
    if( argc<2 ){ 
        cout<<"usage: /.prac filename"<<endl; 
        exit (EXIT_FAILURE);
    }
    
    // Body to open file and read from it
    string line;
    ifstream inFile ( argv[1] );
    if( inFile ){  
        
        // get first line of bookshelves
        // sort vector of bookshelves 
        getline( inFile, line );
        // cout << line << endl; // uncomment for selves
        istringstream iss(line);
        vector<int> shelves;    
        int s;
        while( iss>>s ){        
            shelves.push_back(s);
        }
        sort( shelves.begin(), shelves.end() );
       

        // get all following lines of books titles and size
        // TODO: store title of the book 
        //      ( possibly orded pair (int, str ) )
        vector<int> books;
        int b;
        int bookSum =0; 
        while( getline( inFile, line ) ){
            // cout << line << endl; //uncomment to print books
            istringstream iss(line);
            iss>>b;
            bookSum += b;
            books.push_back(b);
        }
        
        // call calculateNumShelves() and return count for num shelves
        int count = calculateNumShelves( shelves, bookSum, 0 );      
        if( count == -1 ){ cout << "impossible" << endl; return 0;}
        cout<<"minimum shelves needed: " << count << endl;
    }
    return 0;
}
