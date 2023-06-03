# Snake Game

This repository contains a simple implementation of the classic Snake game using C++ and OpenGL. The game provides a grid-based environment where the player controls a snake, guiding it to eat food and grow in length while avoiding collisions with the boundaries and its own body.

## Features

- Grid-based environment with customizable size
- Snake movement in four directions: up, down, left, and right
- Randomly generated food on the grid
- Collision detection with boundaries and self
- Increasing snake length upon eating food

## Prerequisites

To run the Snake game, you need to have the following installed:

- C++ compiler
- OpenGL library
- GLUT library

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/snake-game.git
   ```

2. Compile the code using your C++ compiler:

   ```bash
   g++ -o snake-game snake.cpp -lGL -lGLU -lglut
   ```

3. Run the executable:

   ```bash
   ./snake-game
   ```

4. Play the game:
   - Use the arrow keys to control the snake's movement.
   - Guide the snake to eat the food and avoid collisions with the boundaries and its own body.
   - The game ends when the snake collides with a boundary or itself.


## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). See the [LICENSE](LICENSE) file for more details.

## Acknowledgments

- This project is based on the classic Snake game concept.
- The implementation utilizes the OpenGL and GLUT libraries for graphics and user input.
- The code was inspired by various online resources and tutorials.



Enjoy the Snake Game!
