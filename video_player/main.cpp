#include "xPlayer.h"

int main(int argc, char* argv[])
{
    xPlayer player;
    if (false == player.Start("hxy.mp4"))
        return -1;

    player.SDLEventProcess();

    player.Stop();
    return 0;
}