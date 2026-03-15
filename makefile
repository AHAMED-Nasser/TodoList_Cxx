COMPILER = g++
APP = app.exe

PROMPTER_INT_H = Include/Prompt/PrompterChoiceInt.h
PROMPTER_INT_O = PrompterChoiceInt.o
PROMPTER_INT_CXX = Workdir/Prompt/PrompterChoiceInt.cxx

METHODE_PROMPT_H = Include/GeneralFunctions/MethodePrompt.h
METHODE_PROMPT_O = MethodePrompt.o
METHODE_PROMPT_CXX = Workdir/GeneralFunctions/MethodePrompt.cxx

$(APP): main.o $(PROMPTER_INT_O) $(METHODE_PROMPT_O)
	$(COMPILER) -o $(APP) main.o $(PROMPTER_INT_O) $(METHODE_PROMPT_O)

main.o: main.cxx $(PROMPTER_INT_H) $(METHODE_PROMPT_H)
	$(COMPILER) -c main.cxx -I./Include

$(PROMPTER_INT_O): $(PROMPTER_INT_CXX) $(PROMPTER_INT_H)
	$(COMPILER) -c $(PROMPTER_INT_CXX) -I./Include

$(METHODE_PROMPT_O): $(METHODE_PROMPT_CXX) $(METHODE_PROMPT_H)
	$(COMPILER) -c $(METHODE_PROMPT_CXX) -I./Include

clean:
	rm -f *.o $(APP)