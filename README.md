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
