#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void create()
{
    // file pointer
    fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("ex1.csv", std::ios::out | std::ios::app);
  
    std::cout << "Enter the details of 5 students:"
         << " roll name maths phy chem bio";
    std::cout<<std::endl;
  
    int i, roll, phy, chem, math, bio;
    std::string name;
  
    // Read the input
    for (i = 0; i < 1; i++) {
  
        std::cin >> roll
            >> name
            >> math
            >> phy
            >> chem
            >> bio;
  
        // Insert the data to file
        fout << roll << ", "
             << name << ", "
             << math << ", "
             << phy << ", "
             << chem << ", "
             << bio
             << "\n";
    }
}

int main(){
    create();
}