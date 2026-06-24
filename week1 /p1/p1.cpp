#include <iostream>
using namespace std;

int compare_string(string str1,string str2){
    for(char &c : str1) c=tolower(c);
    for(char &c : str2) c=tolower(c);

    if(str1<str2)
        return -1;
    else if (str1==str2)
        return 0;
    else
        return 1;
}

int main(){
    string str1,str2;
    cin >>str1>>str2;
    cout << compare_string(str1, str2);
}