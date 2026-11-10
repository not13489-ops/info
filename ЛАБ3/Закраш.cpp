#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {

    const int cellSize = 50;
    const int gridSize = 10;

    RenderWindow window(VideoMode(500, 500), L"Закрашивание");

    RectangleShape cells[gridSize][gridSize];

   
    for (int i = 0; i < gridSize; ++i)
    {
        for (int j = 0; j < gridSize; ++j)
        {
            cells[i][j].setSize(Vector2f(cellSize - 2, cellSize - 2));
            cells[i][j].setPosition(i * cellSize + 1, j * cellSize + 1);
            cells[i][j].setFillColor(Color::White);
            cells[i][j].setOutlineColor(Color::Black);
            cells[i][j].setOutlineThickness(1);
        }
    }

    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i == j || i == 0 || i == gridSize - 1)
                cells[i][j].setFillColor(Color::Green);
        }
    }

    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color::White);

        for (int i = 0; i < gridSize; ++i)
        {
            for (int j = 0; j < gridSize; ++j)
            {
                window.draw(cells[i][j]);
            }
        }

        window.display();
    }

    system("pause");

    return 0;
}