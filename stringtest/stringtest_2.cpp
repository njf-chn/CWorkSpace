#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "hello";
    string str2 = "world";
    string str3 = str1 + " " +str2;
    cout << str1 << endl<< str2 << endl << str3 <<endl;

    if (str3=="hello world"){
        cout << "equal" << endl;
    }else{
        cout << "not equal" << endl;
    }
    return 0;
}

