#ifndef PROMPTER_CHOICE_INT_H
#define PROMPTER_CHOICE_INT_H

#include <vector>
#include <string>

class PrompterChoiceInt {
    private:
        int userInput;
        std::string title;
        std::vector<std::string> allOptions;
    
    public:
        int getUserChoice();
        void setTitle(std::string title);

        void displayTitle();
        int initPrompt();
        void addOption(std::string option);
        void displayChoice();
};


#endif