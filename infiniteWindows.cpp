#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main(){
    while(true){
    ShellExecute(NULL, "open", "https://www.google.com/", NULL, NULL, SW_SHOWNORMAL);
    ofstream outfile("Hello.txt");
    outfile << "Ayy lmao\n";
    }
    return 0;
}
