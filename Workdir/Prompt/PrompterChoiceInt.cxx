#include <iostream>
#include <string>
#include <vector>
#include "../../Include/Prompt/PrompterChoiceInt.h" // Prompter

using namespace std;

namespace UtilityFunction {
    void showTitlePrompter(vector<string> const& allOptions) {
        cout << "Type (";
        for (unsigned int i = 0; i < allOptions.size(); i++) {
            if (i < allOptions.size()-1) {
                cout << i+1 << ',';
            } else {
                cout << i+1 << "): ";
            }
        }
    }
}

int PrompterChoiceInt::getUserChoice() {
    return this->userInput;
}

void PrompterChoiceInt::setTitle(string title) {
    this->title = title;
}

void PrompterChoiceInt::displayTitle() {
    if (this->title.size() == 0) {
        cout << "Todo list" << '\n';
    } else {
        cout << this->title << '\n';
    }
    cout << '\n';
}

void PrompterChoiceInt::addOption(string option) {
    this->allOptions.push_back(option);
}

int PrompterChoiceInt::initPrompt() {
    UtilityFunction::showTitlePrompter(this->allOptions);
    
    cin >> this->userInput;

    while (this->userInput <= 0 || this->userInput > this->allOptions.size()) {
        cout << "Veuillez choisir parmi les options proposé !" << '\n';
        UtilityFunction::showTitlePrompter(this->allOptions);
        cin >> this->userInput;
    }

    return this->userInput;
}

void PrompterChoiceInt::displayChoice() {
    if (this->allOptions.size() == 0) {
        cout << "Aucune option configuré !" << '\n';
    }

    for (unsigned int i = 0; i < this->allOptions.size(); i++) {
        cout << i+1 << "- " << this->allOptions[i] << '\n';
    }
    cout << '\n';
}