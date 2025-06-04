#include<raylib.h>

int main()
{
    InitWindow(800,600,"HelloRaylib");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Hello Raylib",800 / 5,250,80,RED);

        EndDrawing();
    }

    return 0;
}