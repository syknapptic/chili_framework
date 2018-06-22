/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawFace(int x, int y);
	void DrawPoo(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawTitleScreen(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	//int ReverseX(int x, int width);
	//int ReverseY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0,
		             int x1, int y1, int width1, int height1);
	bool is_touching_right(int x, int width);
	bool is_touching_left(int x, int width);
	bool is_touching_bottom(int y, int height);
	bool is_touching_top(int y, int height);
	int Game::update_poo_x_direction(int x, int poo_x_direction, int poo_width);
	int Game::update_poo_y_direction(int x, int poo_y_direction, int poo_height);
	int update_poo_x(int x, int poo_x_direction, int poo_width);
	int update_poo_y(int y, int poo_y_direction, int poo_height);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int dude_x = 400;
	int dude_y = 300;
	int dude_width = 20;
	int dude_height = 20;

	int poo_width = 24;
	int poo_height = 24;
	int poo0_x = 300;
	int poo0_y = 150;
	int poo0_x_direction = 1;
	int poo0_y_direction = 1;
	bool poo0_is_eaten = false;

	int poo1_x = 100;
	int poo1_y = 500;
	int poo1_x_direction = 1;
	int poo1_y_direction = 1;
	bool poo1_is_eaten = false;

	int poo2_x = 600;
	int poo2_y = 400;
	int poo2_x_direction = 1;
	int poo2_y_direction = 1;
	bool poo2_is_eaten = false;

	bool is_started = false;
	//bool is_touching_edge = false;
	/********************************/
};