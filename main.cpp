#include <cstdio>
#include <cstdlib>

#include <SDL2/SDL.h>

#include "Animal.h"
#include "Character.h"

using namespace std;

int main(int argc, char *argv[])
{
	bool fullscreen=false;
	/* Initialisation simple */
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO|SDL_INIT_EVENTS|SDL_INIT_TIMER) != 0 )
    {
        fprintf(stdout,"�chec de l'initialisation de la SDL (%s)\n",SDL_GetError());
        return -1;
    }

    {
        /* Cr�ation de la fen�tre */
        SDL_Window* mWindow = NULL;
        mWindow = SDL_CreateWindow("Ma premi�re application SDL2",SDL_WINDOWPOS_UNDEFINED,
                                                                  SDL_WINDOWPOS_UNDEFINED,
                                                                  640,
                                                                  480,
                                                                  SDL_WINDOW_SHOWN|SDL_WINDOW_RESIZABLE);

        if( mWindow )
        {
            SDL_Event event;
			while (SDL_WaitEvent(&event)) // R�cup�ration des actions de l'utilisateur
			{
				switch(event.type)
				{
					case SDL_QUIT: // Clic sur la croix
						SDL_DestroyWindow(mWindow);
						SDL_Quit();
						return 0;
						break;
					case SDL_KEYUP: // Rel�chement d'une touche
						if ( event.key.keysym.sym == SDLK_f ) // Touche f
						{
							// Alterne du mode plein �cran au mode fen�tr�
							if (!fullscreen)
							{
								fullscreen = 1;
								SDL_SetWindowFullscreen(mWindow,SDL_WINDOW_FULLSCREEN);
							}
							else if (fullscreen)
							{
								fullscreen = 0;
								SDL_SetWindowFullscreen(mWindow,0);
							}
						}
						break;
				}
			}

            SDL_DestroyWindow(mWindow);
        }
        else
        {
            fprintf(stderr,"Erreur de cr�ation de la fen�tre: %s\n",SDL_GetError());
        }
    }

    SDL_Quit();


	return 0;
}
