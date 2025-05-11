#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <vector>
#include <string>

using namespace std;

// Constants for grid dimensions
const int WIDTH = 20;
const int HEIGHT = 10;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = 
{
    "NORTH", "EAST", "SOUTH", "WEST"
};

// Define constants for rooms
enum Room {
    ENTRANCE_HALL = 0,
    CODEX = 1,
    KITCHEN = 2,
    GARDEN = 3,
    BASEMENT = 4,
    NUM_ROOMS = 5
};

// Room names and descriptions
string roomNames[NUM_ROOMS] = 
{
    "ENTRANCE HALL",
    "CODEX",
    "KITCHEN",
    "GARDEN",
    "BASEMENT"
};

string roomDescriptions[NUM_ROOMS] = 
{
    "A high-tech metal entrance hall with a C+ grade alloy statue in the center.",
    "Walls lined with holographic displays. The air smells of electrical circuits.",
    "A spacious kitchen with an old stove and wooden counter.",
    "An overgrown garden with stone pathways and a small fountain.",
    "A dark, damp basement with cobwebs in the corners."
};

// Adjacency list for room connections
int connections[NUM_ROOMS][NUM_DIRECTIONS];

// Function to set terminal to raw mode for single-character input
void setRawMode(termios &old) {
    termios newt = old;
    newt.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

// Function to reset terminal to its original mode
void resetTerminalMode(termios &old) {
    tcsetattr(STDIN_FILENO, TCSANOW, &old);
}

// Function to display the grid
void displayField(const vector<vector<string>>& field) {
    for (const auto& row : field) {
        for (const string& cell : row) {
            cout << cell;
        }
        cout << endl;
    }
}

// Initialize room connections
void initializeConnections() {
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    connections[ENTRANCE_HALL][NORTH] = CODEX;
    connections[ENTRANCE_HALL][EAST] = KITCHEN;
    connections[ENTRANCE_HALL][WEST] = GARDEN;

    connections[CODEX][SOUTH] = ENTRANCE_HALL;

    connections[KITCHEN][SOUTH] = BASEMENT;
    connections[KITCHEN][WEST] = ENTRANCE_HALL;

    connections[GARDEN][EAST] = ENTRANCE_HALL;

    connections[BASEMENT][NORTH] = KITCHEN;
}

void updateGridForRoom(vector<vector<string>>& field, int currentRoom) {
    // Clear the grid
    for (auto& row : field) {
        for (auto& cell : row) {
            cell = "⬜";
        }
    }

    // Define room positions on the grid
    if (currentRoom == ENTRANCE_HALL) {
        field[4][9] = "🧍"; // Player in the Entrance Hall
    } else if (currentRoom == CODEX) {
        field[1][9] = "🧍"; // Player in the Codex
    } else if (currentRoom == KITCHEN) {
        field[4][15] = "🧍"; // Player in the Kitchen
    } else if (currentRoom == GARDEN) {
        field[4][3] = "🧍"; // Player in the Garden
    } else if (currentRoom == BASEMENT) {
        field[7][15] = "🧍"; // Player in the Basement
    }

    // Add pathways
    field[4][8] = "⬛"; field[4][10] = "⬛"; // Pathway in Entrance Hall
    field[3][9] = "⬛";                     // Pathway to Codex
    field[4][14] = "⬛"; field[4][16] = "⬛"; // Pathway to Kitchen
    field[4][4] = "⬛"; field[4][2] = "⬛"; // Pathway to Garden
    field[6][15] = "⬛"; field[8][15] = "⬛"; // Pathway to Basement
}

int main() {
    // Initialize room connections
    initializeConnections();

    // Create a 10x20 grid filled with "⬜" (empty spaces)
    vector<vector<string>> field(HEIGHT, vector<string>(WIDTH, "⬜"));
    int currentRoom = ENTRANCE_HALL; // Start in the Entrance Hall
    char input;
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt); // Save the current terminal settings
    setRawMode(oldt); // Set terminal to raw mode

    while (true) {
        system("clear"); // Clear the console

        // Display system-like prompt
        cout << "[SYSTEM] CURRENT LOCATION: " << roomNames[currentRoom] << endl;
        cout << "[SYSTEM] " << roomDescriptions[currentRoom] << endl;

        // Update the grid for the current room
        updateGridForRoom(field, currentRoom);

        // Display the grid
        displayField(field);

        // Show available exits
        cout << "[SYSTEM] AVAILABLE EXITS: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "NONE";
        }
        cout << endl;

        cout << "[INPUT] Use W/A/S/D to move, Q to quit: ";
        input = getchar(); // Get user input without pressing Enter

        if (input == 'q' || input == 'Q') {
            break; // Exit the loop if 'Q' is pressed
        }

        // Update the current room based on input
        if (input == 'w' || input == 'W') {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            }
        } else if (input == 's' || input == 'S') {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            }
        } else if (input == 'a' || input == 'A') {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            }
        } else if (input == 'd' || input == 'D') {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            }
        }
    }

    resetTerminalMode(oldt); // Restore the original terminal settings
    cout << "[SYSTEM] GAME TERMINATED" << endl;
    return 0;
}