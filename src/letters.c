#include "draw.h"
const char CBANNER_LETTERS [][CBANNER_LETTER_HEIGHT][CBANNER_LETTER_WIDTH] = {
	{
		"??????",
		"??????",
		"??????",
		"??????",
		"??????",
	},
	{
		" ---- ",
		"|    |",
		"|----|",
		"|    |",
		"-    -",
	},
	{
		" ---- ",
		"|    |",
		"|---- ",
		"|    |",
		" ---- ",
	},
	{
		" ---- ",
		"|     ",
		"|     ",
		"|     ",
		" ---- ",
	},
	{
		" ---  ",
		"|    \\",
		"|    |",
		"|    /",
		" ---  ",
	},
	{
		"----- ",
		"|     ",
		"|--   ",
		"|     ",
		"----- ",
	},
	{
		"----- ",
		"|     ",
		"|---  ",
		"|     ",
		"-     ",
	},
	{
		"----- ",
		"|     ",
		"|  -- ",
		"|   | ",
		"----- ",
	},
	{
		"-    -",
		"|    |",
		"|----|",
		"|    |",
		"-    -",
	},
	{
		" ---  ",
		"  |   ",
		"  |   ",
		"  |   ",
		" ---  ",
	},
	{
		"  --- ",
		"   |  ",
		"   |  ",
		"\\  /  ",
		" --   ",
	},
	{
		"-   - ",
		"|  /  ",
		"|<    ",
		"|  \\  ",
		"-   - ",
	},
	{
		" -    ",
		" |    ",
		" |    ",
		" |    ",
		"------",
	},
};

int _cb_letter_index_map (char letter) {
	switch (letter) {
		case 'A': return 1;
		case 'B': return 2;
		case 'C': return 3;
		case 'D': return 4;
		case 'E': return 5;
		case 'F': return 6;
		case 'G': return 7;
		case 'H': return 8;
		case 'I': return 9;
		case 'J': return 10;
		case 'K': return 11;
		case 'L': return 12;
		default: return 0;
	}
}


