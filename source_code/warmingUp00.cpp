// warmingUp00.cpp
//

#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<string> team;
  
    team.push_back("Takis");
    team.push_back("Vivi");

    // show on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        cout << *i << endl;

    return 0;
}
