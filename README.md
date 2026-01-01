# Tic Tac Toe in C

This is a simple 2-player **Tic Tac Toe game** implemented in C. The game runs in the console and allows two players to take turns, checking for wins or draws after each move.

## Features

- 2-player console-based gameplay
- Board is printed after each move
- Validates moves (prevents overwriting cells)
- Declares winner or draw automatically

## Project Structure

TicTacToe/
│
├── src/
│   ├── main.c
│   ├── game.c
│   └── game.h
│
└── README.md

## How to Compile

1. Open terminal/command prompt and navigate to the `src` folder.
2. Compile using `gcc`:

```bash
gcc main.c game.c -o TicTacToe

./TicTacToe   # Linux/Mac
TicTacToe.exe # Windows

Players X and O take turns choosing a cell (1-9) corresponding to the board:

 1 | 2 | 3
 ----------
 4 | 5 | 6
 ----------
 7 | 8 | 9
