#include <iostream>
#include <vector>
#include <string>
#include "Include/Prompt/PrompterChoiceInt.h"
#include "Include/GeneralFunctions/MethodePrompt.h"

using namespace std;

int main() {

    int userChoice = ShowPrompterChoiceInt::displayPrompterChoiceInt();

    cout << "Vous avez choisi: " << userChoice << '\n';

    return 0;
}
