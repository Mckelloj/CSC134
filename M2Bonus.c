/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
#include "raylib.h"
#include <math.h>
#include <stdlib.h>

#define MAZE_WIDTH 1000
#define MAZE_HEIGHT 1000
#define CELL_SIZE 75

typedef enum GameScreen { LOGO, TITLE, GAMEPLAY, ENDING } GameScreen;

void PlayExplosionAnimation()
{
    int explosionRadius = 10;
    int maxRadius = 100;
    int centerX = 400;
    int centerY = 225;

    for (int i = 0; i < maxRadius; i += 5)
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(centerX, centerY, i, Fade(RED, 1.0f - (float)i / maxRadius));
        EndDrawing();
    }
}

// Simple maze representation (1 = wall, 0 = path)
int maze[MAZE_HEIGHT][MAZE_WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1},
    {1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1},
    {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

int main(void)
{
    const int screenWidth = 2200;
    const int screenHeight = 850;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;
    int framesCounter = 0;
    SetTargetFPS(60);

    Vector2 playerPosition = { CELL_SIZE + CELL_SIZE / 2, CELL_SIZE + CELL_SIZE / 2 };
    float playerSpeed = 5.f;
    

    while (!WindowShouldClose())
    {
        switch (currentScreen)
        {
            case LOGO:
                framesCounter++;
                if (framesCounter > 120)
                {
                    PlayExplosionAnimation();
                    currentScreen = TITLE;
                    framesCounter = 0;
                }
                break;
            case TITLE:
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    PlayExplosionAnimation();
                    currentScreen = GAMEPLAY;
                }
                break;
            case GAMEPLAY:
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    PlayExplosionAnimation();
                    currentScreen = ENDING;
                }
                
                Vector2 newPosition = playerPosition;
                if (IsKeyDown(KEY_RIGHT)) newPosition.x += playerSpeed;
                if (IsKeyDown(KEY_LEFT)) newPosition.x -= playerSpeed;
                if (IsKeyDown(KEY_DOWN)) newPosition.y += playerSpeed;
                if (IsKeyDown(KEY_UP)) newPosition.y -= playerSpeed;
                
                int gridX = (int)(newPosition.x / CELL_SIZE);
                int gridY = (int)(newPosition.y / CELL_SIZE);
                
                if (maze[gridY][gridX] == 0) playerPosition = newPosition;
                break;
            case ENDING:
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    PlayExplosionAnimation();
                    currentScreen = TITLE;
                }
                break;
            default:
                break;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (currentScreen)
        {
            case LOGO:
                DrawText("LOGO SCREEN", 40, 40, 80, LIGHTGRAY);
                DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);
                break;
            case TITLE:
                DrawRectangle(9, 7, screenWidth, screenHeight, RED);
                DrawText("TITLE SCREEN", 50, 40, 70, BLUE);
                DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);
                break;
            case GAMEPLAY:
                DrawText("GAMEPLAY SCREEN", 100, 200, 400, MAROON);
                DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 20, 20, MAROON);
                DrawRectangle(8, 9, screenWidth, screenHeight, BROWN);
                for (int y = 0; y < MAZE_HEIGHT; y++)
                {
                    for (int x = 0; x < MAZE_WIDTH; x++)
                    {
                        if (maze[y][x] == 1)
                        {
                            DrawRectangle(x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE, BLACK);
                        }
                    }
                }
                
                DrawCircleV(playerPosition, 5, BLUE);
                break;
            case ENDING:
                DrawRectangle(45, 56, screenWidth, screenHeight, BLUE);
                DrawText("ENDING SCREEN", 10, 10, 20, DARKBLUE);
                DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);
                break;
            default:
                break;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
