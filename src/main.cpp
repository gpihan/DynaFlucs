/// \file main.cpp
/// Contains main function

#include <ctime>
#include <random>
#include "parameters.h"
#include "display.h"

int main(int argc, char *argv[]){
    srand(time(0));

    Display display;

    display.ShowWelcomeMessage();

    // read parameters file. 
    Parameters parameters(argv[1]);

    parameters.read();


    return 0;
}
