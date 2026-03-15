#include <iostream>
#include <string>
#include <vector>
#include "../../Include/GeneralFunctions/MethodePrompt.h"

using namespace std;

namespace ShowPrompterChoiceInt {

    int displayPrompterChoiceInt() {
        PrompterChoiceInt generalPrompter;

        generalPrompter.setTitle("The Nasser's TODO LIST");
        // Affichage du titre de l'app
        generalPrompter.displayTitle();

        // Option for menu home
        std::vector<std::string> options = {"Create task folder", 
            "Delete task folder",
            "Edit task folder name",
            "Export task folder as PDF",
            "Exit app"};
        // Remplissage du vector des options
        for (std::string option : options) {
            generalPrompter.addOption(option);
        }

        generalPrompter.displayChoice(); // Affichage des choix ajoutés
        int userChoice = generalPrompter.initPrompt(); // En attente du choix du user

        return userChoice;
    }

}