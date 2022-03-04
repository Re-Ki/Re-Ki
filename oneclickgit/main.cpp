#include "iostream"
#include "string.h"
#include "stdlib.h"

using namespace std;

int main(){

    char* name;
    char* commit;
    name = new char[500];
    commit = new char[500];

    cout<<"Enter commit :";
    gets(name);
    strcpy(commit,"git status && git add --all && git commit -m \"");
    strcat(commit,name);
    strcat(commit,"\" && git push -u origin main && git pull origin main");
    cout<<commit;
    system(commit);

    return 0;
}
