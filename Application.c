#include <stdio.h>
#include "raylib.h"

// gcc -o Blunder.exe Application.c -L. -lraylib -lgdi32 -lwinmm
// Test

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "Test Window");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);
		DrawText("Somebody once told me...", 190, 200, 20, RAYWHITE);

		EndDrawing();
	}
	
	CloseWindow();


}
