#include<stdio.h>
enum menu{
    newGame,
    loadGame,
    savedGame,
    quitGame
};
int main()
{
    enum menu selected = newGame;

    switch(selected)
    {
    case newGame:
        printf("1. Starting a new game.....\n");
        break;
    case loadGame:
        printf("2. Loading a saved game....\n");
        break;
    case savedGame:
        printf("3. Saving the current game.\n");
        break;
    case quitGame:
        printf("4. Quitting the game.......\n");
        break;
    default:
        printf("5. Invalid selected option.\n");
    }
}
