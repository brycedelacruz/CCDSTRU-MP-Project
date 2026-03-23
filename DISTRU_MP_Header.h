/*
  This File Contains All The Definitions And Function Declarations
*/

// Defining Applicable Sets And Initialization
typedef int M[3][3];

// Defining System Global Variables
int good = 0, go = 1, start = 1, over = 0, found = 0, val = 0;
M R, B, S, T, F;

// Game Function Declarations
void clear(M pos);
void replace(M pos);
void expand(M pos);
void update(M pos);
void nextplayermove(M pos);
void gameover();
