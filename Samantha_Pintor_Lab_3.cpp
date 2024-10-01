[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/nLSXgZ2n)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16258770&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//9-30-24
//Lab Three

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
   
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    cout << setfill ('#');  //set fill to hash tags
    cout << setw(90) << "#" << endl; //line of hash tags
    
    cout << setfill (' '); //set fill to blank space
    cout << setw(1) << "#" << "Ways to access the Task Manager on your Windows computer:" << setw (31) << " " << setw(1) << "#" << endl; //line of text 
    cout << setw(1) << "#" << setw(88) << " " << setw(1) << "#" << endl; //line of space
    cout << setw(1) << "#" << setw(5) << " " << "Press the key combination Ctrl + Shift + Escape" << setw (36)  << " " << setw(1) << "#" << endl; //line of text
    cout << setw(1) << "#" << setw(88) << " " << setw(1) << "#" << endl; //line of space 
    cout << setw(1) << "#" << setw(5) << " " << "Press the key combination Ctrl + Alt + Delete and select Task Manager" << setw(14)  << " " << setw(1) << "#" << endl; //line of text 
    cout << setw(1) << "#" << setw(88) << " " << setw(1) << "#" << endl; //line of space
    cout << setw(1) << "#" << setw(5)  << " " << "Type Task Manager in the Windows Start Menu search" << setw(30)  << " " << setw(4) << "#" << endl; //line of text
    cout << setw(1) << "#" << setw(88) << " " << setw(1) << "#" << endl; //line of space
    
    cout << setfill ('#'); //set fill back to hash tag
    cout << setw(90) << "#" << endl; //line of hash tags
   
    return 0;
}

/*
##########################################################################################
#Ways to access the Task Manager on your Windows computer:                               #
#                                                                                        #
#    Press the key combination Ctrl + Shift Plus Escape                                  #
#                                                                                        #
#    Press the key combination Ctrl + Alt + Delete and select Task Manager               #
#                                                                                        #
#    Type Task Manager in the Windows Start Menu search                                  #
#                                                                                        #
##########################################################################################
*/
