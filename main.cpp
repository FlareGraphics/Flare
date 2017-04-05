#include <iostream>

#include <dummy.h>
#include <io.h>

int main() {
    IO myIO;
    myIO.start();
    myIO.stop();
    return EXIT_SUCCESS;
}
