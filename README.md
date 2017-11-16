# macOS_SDL_Installer
###### This is a basic tutorial to install SDL 1.2 or 2 on macOS

## Install SDL 1.2

1. Download [`install-sdl.sh`](../master/install-sdl.sh).
2. Open Terminal.

3. In Terminal:

   `cd ~/Downloads/`  (Or where install-sdl.sh is.)

   `sudo sh install-sdl.sh`

#### Now, SDL 1.2 is installed.
To use it, you can use gcc compiler.

``gcc hello.c -o hello `sdl-config --cflags --libs` -lSDL -lSDL_main -lSDL_gfx -lSDL_ttf -lSDL_image -lSDL_mixer -framework Cocoa``

