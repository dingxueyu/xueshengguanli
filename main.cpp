#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << '1' <<endl;
    cout << endl;
    system("pause");
    return 0;
}

//你好，我好大家好，大家好

  
 //这是一个跑通了的一个很好的demo，最起码exe文件出现之后，没有出现闪退，是一个非常大的进步
