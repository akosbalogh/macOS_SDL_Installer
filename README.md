# macOS SDL 1.2 installer
###### Rövid, egyszerű tutorial SDL 1.2 telepítéséhez macOS-en. Jelenleg GCC compiler tutorial-t és egy cmake file-t tartalmaz a repo. Más programokban, pl.: xCode is ezeket a flageket kell használni, mint a GCC-nél.

## SDL 1.2 Telepítése

1. Töltsd le ezt: [`install-sdl.sh`](../infoc/install-sdl.sh?raw=true). (Alt+Click) Ez telepíti azokat amik kellenek az SDL-hez, és még nincsenek fent a gépeden.
2. Nyisd meg a Terminal-t.
3. Terminal-ban írd be, hogy:

   `cd ~/Downloads/`  (Vagy ahova letöltötted az _install-sdl.sh_-t.)
4. Majd ezzel futtasd le:
   `sh install-sdl.sh`

#### Így a HomeBrew package manager, feltelepült, ha nem volt fent, és azzal felraktuk a legfontosabb SDL-modulokat.
Ahhoz hogy használhassuk az SDL a legegyszerűbb módon idd egy példa __GCC__ fordítóhoz.
```bash
gcc sample-sdl-code.c -o workingSDL `sdl-config --cflags --libs` -lSDL -lSDLmain -lSDL_gfx -lSDL_ttf -lSDL_image -lSDL_mixer -framework Cocoa
```
Értelmezés:

gcc -  compiler

sample-sdl-code.c - fordítandó C file-ok, lehet pl.: *.c is.

-o workingSDL - az output file, amibe összelinkeli az object file-okat.

`` `sdl-config --cflags --libs` `` - ez output-ol az SDL-hez pár flag-et, lib-et, jó ha mindig marad.

-lSDL -lSDLmain - Ezek kellenek alapból, SDL flag-ek, hogy használja a fordító, mint library.

-lSDL_gfx -lSDL_ttf -lSDL_image -lSDL_mixer - Ezek opcionálisak, azt tedd be ami kell neked :).

-framework Cocoa macOS ablakkezeléshez elengedhetetlen.

Hogyan include-olj projektekben? Picit másabb mint az infoC-s példáknál.

```C
...
#include <SDL/SDL.h>
#include <SDL_gfx/SDL_gfxPrimitives.h>
...
```