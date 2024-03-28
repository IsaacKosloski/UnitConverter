/* Created by Isaac Kosloski on 28/03/2024.*/
#include "functions.h"
#define OPTION_LAYERS 2

int main(int argc, char** argv)
{
    unsigned short int selectedOption[OPTION_LAYERS];


    menuDisplay();
    scanf("Select: %hd", &selectedOption[0]);

}
