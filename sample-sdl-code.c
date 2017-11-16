#include <SDL/SDL.h>
#include <SDL_gfx/SDL_gfxPrimitives.h>

static const int SCREEN_W = 320;
static const int SCREEN_H = 240;

int main(int argc, char* argv[])
{
    SDL_Event evt;
    int i;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        return -1;
    }

    SDL_Surface* screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 24, SDL_SWSURFACE | SDL_DOUBLEBUF);
    if (screen == NULL) {
        return -1;
    }

    while (1) {
        while (SDL_PollEvent(&evt)) {
            if (evt.type == SDL_QUIT) {
                goto finish;
            }
            if (evt.type == SDL_KEYUP && evt.key.keysym.sym == SDLK_ESCAPE) {
                goto finish;
            }
        }

        SDL_LockSurface(screen);

        SDL_FillRect(screen, NULL, 0x000088);

        for (i = 0; i < 100; ++i) {
            int x0 = rand() % SCREEN_W;
            int y0 = rand() % SCREEN_H;
            int x1 = rand() % SCREEN_W;
            int y1 = rand() % SCREEN_H;

            lineColor(screen, x0, y0, x1, y1, 0xFFFFFFFF);
        }

        SDL_FreeSurface(screen);
        SDL_Flip(screen);
    }

finish:
    SDL_FreeSurface(screen);
    SDL_Quit();

    return 0;
}