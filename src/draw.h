#ifndef CBANNER_DRAW_H
#define CBANNER_DRAW_H

#define CBANNER_LETTER_HEIGHT 5
#define CBANNER_LETTER_WIDTH 7
#define CBANNER_LETTER_SIZE (CBANNER_LETTER_HEIGHT * CBANNER_LETTER_WIDTH)


char * cb_generate (const char * line);
int _cb_letter_index_map (char letter);

// CBANNER_DRAW_H
#endif

