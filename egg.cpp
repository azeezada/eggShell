#include <iostream>
#include <string> 
using namespace std;
  
#define MAX_CLI_INPUT_LEN 8191 // Maximum length accepted by the commmand line
void process_cd(string s);

int main()
{
    string cli_in;
    string cd = "cd";
    while(true) {
        cout << "egg> ";
        getline(cin,cli_in);
        cout << cli_in << "\n";
        if (cli_in.find(cd) != string::npos) {
           process_cd(cli_in);
        }
    }
    return 0;
}

void process_cd(string s) {
   cout << "process_cd inputs: " << s << "\n"; 
}
