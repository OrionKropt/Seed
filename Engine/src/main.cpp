#include "main.h"


#include <SDL.h>

#include"world.h"

using namespace std;



void Init(SDL_Window*, SDL_Renderer*);




int main(int argc, char* argv[])
{
	World world;
	Entity Player = world.CreateEntity();
	Entity Enemy = world.CreateEntity();
	cout << Player.GetId() <<  ' ' << world.entites[world.IndexEntites.at(Player.GetId())].GetId() << endl;
	cout << Enemy.GetId() << ' ' << world.entites[world.IndexEntites.at(Enemy.GetId())].GetId() << endl;
	world.DestroyEntity(Player);
	Entity Player1 = world.CreateEntity();
	cout << Player1.GetId() << ' ' << world.entites[world.IndexEntites.at(Player1.GetId())].GetId() << endl;
	
	
	return 0;	
}

void Init(SDL_Window* win, SDL_Renderer* ren)
{

}












//SDL_Window* win = NULL;
//SDL_Renderer* ren = NULL;
//
//int win_width = 800, win_height = 600;
//
//void DeInit(int error)
//{
//	if (ren != NULL) SDL_DestroyRenderer(ren);
//	if (win != NULL) SDL_DestroyWindow(win);
//	
//	SDL_Quit();
//	exit(error);
//}
//
//void Init()
//{
//	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
//	{
//		cout << "SDL_Init Error " << SDL_GetError() << endl;
//		DeInit(1);
//	}
//	//Creat Window                             
//	win = SDL_CreateWindow("Oven", 100, 100, win_width, win_height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
//	if (win == nullptr) {
//		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
//		DeInit(1);
//	}
//
//	
//
//	// Creat Renderer
//	ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
//	if (ren == NULL)
//	{
//		cout << "SDL_CreateRenderer Error: " << SDL_GetError() << endl;
//		DeInit(1);
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	cout << "Hello from main\n";
//	Init();
//
//	
//	
//
//
//
//	SDL_SetRenderDrawColor(ren, 255, 124, 124, 0);
//	SDL_RenderClear(ren);
//	SDL_SetRenderDrawColor(ren, 0, 155, 0, 255);
//
//	int BSize = 50;
//	bool gameover = true;
//	while (gameover)
//	{
//		SDL_Rect r = { 0, 0, win_width,BSize };
//	SDL_RenderFillRect(ren, &r);
//	r = { 0, win_height - BSize, win_width, BSize };
//	SDL_RenderFillRect(ren, &r);
//	SDL_RenderPresent(ren);
//	//SDL_Delay(1000);
//
//	SDL_Event ev;
//	
//	
//	
//		SDL_PollEvent(&ev);
//		switch (ev.type)
//		{
//		case SDL_QUIT:
//			gameover = false;
//			break;
//		}
//	}
//	
//	DeInit(0);
//	return 0;
//}