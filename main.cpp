#include <iostream>
#include <string>
#include <cctype>  // isdigit()

class people{


    class tutor{

    };
    class student{

    };
    class teacher{

    };
    

};

void initial();
int teachermenu();
int tutormenu();
int studentmenu();


void initial() {
    const int menuLineCount = 9;
    for (int i = 0; i < menuLineCount; i++) {
        if(i=0) {
            std::cout << "|====== STUDENT DATABASE MANAGEMENT SYSTEM ======| \n";
        }
        else if (i=3){
            std::cout << "|                 1. Log   in                    | \n";
        }
        else if (i=4){
            std::cout << "|                 2. Show  Info                  | \n";
        }
        else if (i=5){
            std::cout << "|                 3. Exit  Program               | \n";
        }
        else if (i=8){
            std::cout << "                Select Your Choice :=>  ";
        }
        else{
            std::cout << "|                                                | \n"; 
        }
    }
}

int teachermenu(){
    "Show all students",
    "Show all tutors",
    "Show all subjects",
    "Show all subjects enrolled by ID",
    "Change user's name",
    "Add new student",
    "Add new tutor",
    "Add new subject",
    "unlock user by ID",
    "Review joining request",
    "Logout"
}

int tutormenu(){


}

int studentmenu(){
    

}



int main(){
    
    int x;
    std::cin>>x;
}
