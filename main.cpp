#include <iostream>

using namespace std;


int main()
{
    string str[] = {"gksforgeeks", "geksquiz", "clanguage"};
    int arrSize = sizeof(str) / sizeof(str[0]);

    for(int i = 0; i < arrSize; i++){
        for(int j = i + 1; j < arrSize; j++){
            if(str[i] > str[j]){
                swap(str[i], str[j]);
            }
        }
     }
     for(int i = 0; i < arrSize; i++){
        cout << str[i] << endl;
     }
    return 0;
}
