//
// Created by Hasee on 2023/9/28.
//

#include "include.h"
int main(int argc, char **argv)
{
#if _TEST_
    test_case1();
    getchar();
#else
    CScene scene;

    if (argc == 1) {
        int eraseGridNumber = inputDifficulty();
        scene.generate();
        scene.eraseRandomGrids(eraseGridNumber);
    }
    else if (argc == 3 && !strcmp(argv[1], "-l")) {
        // load saved game progress
        scene.load(argv[2]);
    }
    else {
        printHelp();
        return 0;
    }

    scene.setMode(inputKeyMode());

    scene.play();
#endif

    return 0;
}