#ifndef __Game__
#define __Game__

#include <SDL2/SDL.h>

class Game
{
public:
	Game(){}
	~Game(){}

	void init() {m_bRunning = true;}
	void render(){}
	void update(){}
	void handleEvents(){}
	void clean(){}
	bool running(){ return m_bRunning;}
private:

	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;

};

#endif
