#include <iostream>
#include "SDL.h"
#include "SDL_ttf.h"
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello from main\n";
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		cout << "SDL_Init Error " << SDL_GetError() << endl;
		return 1;
	}
	                             
	SDL_Window* win = SDL_CreateWindow("Oven", 100, 100, 640, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	
	if (win == nullptr) {
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		return 1;
	}
	SDL_Quit();
	return 0;
}