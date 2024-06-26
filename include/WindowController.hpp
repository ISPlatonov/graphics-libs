#pragma once

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Figures.hpp"
#include "Brain.hpp"
#include <string>
#include <queue>


class WindowController
{
public:
    static int Run();

private:
    WindowController() = delete;
    static void make_turn();
    static void event_handler(sf::RenderWindow &window);
    static void draw();
    static void addDrawable();
    
    static inline std::string TITLE = "Graphs - filled triangles of fixed size";
    static inline const sf::Color BACKGROUND_COLOR = sf::Color::White;
    static sf::RenderWindow window;
    static inline std::vector<sf::Vertex> vertices;
    static sf::VertexBuffer vertex_buffer;
    static inline std::vector<Figure> figures;
    static inline FigureType current_figure = FigureType::Triangle;
    static inline sf::Vector2f staged_mouse_position;
    static inline bool is_dragging = false;
    static inline bool is_playing = false;
    static inline Brain brain;
};