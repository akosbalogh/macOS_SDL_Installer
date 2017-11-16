# macOS_SDL_Installer
###### This is a basic tutorial to install SDL 1.2 or 2 on macOS

## Install SDL 1.2

1. Get [`install-sdl.sh`](../master/install-sdl.sh?raw=true). (Alt+Click)
2. Open Terminal.

3. In Terminal:

   `cd ~/Downloads/`  (Or where install-sdl.sh is.)

   `sudo sh install-sdl.sh`

#### Now, SDL 1.2 is installed.
To use it, you can use gcc compiler:

```bash
gcc sample-sdl-code.c -o workingSDL `sdl-config --cflags --libs` -lSDL -lSDLmain -lSDL_gfx -lSDL_ttf -lSDL_image -lSDL_mixer -framework Cocoa
```

To include it in your C projects:

```C
...
#include <SDL/SDL.h>
#include <SDL_gfx/SDL_gfxPrimitives.h>
...
```