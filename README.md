# macOS SDL installer with Sample code
###### This is a basic tutorial to install SDL 1.2 or 2 on macOS

# Table of contents:

* Install SDL
   * [Install SDL 1.2](#install-sdl-12)
   * [Install SDL 2](#install-sdl-2)
* [Using SDL with CLion](#using-sdl-with-clion)
* [Using SDL with XCode](#using-sdl-with-xcode)


## Install SDL 1.2

1. Get [`install-sdl.sh`](../master/install-sdl.sh?raw=true). (Alt+Click)
2. Open Terminal.

3. In Terminal:

   `cd ~/Downloads/`  (Or where install-sdl.sh is.)

   `sh install-sdl.sh`

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



## Install SDL 2
###### (TODO)


# Using SDL with CLion
###### (TODO) (other_resources/CMakeLists.txt)

# Using SDL with XCode
###### (TODO) (Just linker flag setup)
