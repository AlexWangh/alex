#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream myFile;
    myFile.open("ex1.csv");
    while (myFile.good()){
        string line;
        getline(myFile,line,',');
        cout<<line<<endl;
    }
}



