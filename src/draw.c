#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "draw.h"

extern const char CBANNER_LETTERS [][CBANNER_LETTER_HEIGHT][CBANNER_LETTER_WIDTH];

void _cb_make_index_list (const char * original, int * index_list, size_t size) {
	for (int i = 0; i < size; ++i) {
		 index_list[i] = _cb_letter_index_map(original[i]);
	}
}

size_t _cb_filter_index_list (int * index_list, size_t size) {
	// Take out all -1's and shift everything else to the front of
	// the array
	// Returns the length of the valid array part
	// Currently not in use anymore
	int j = 0;
	for (size_t i = 0; i < size; ++i) {
		if (index_list[i] == -1) {
			continue;
		}
		index_list[j] = index_list[i];
		if (j != i) {
			index_list[i] = -1;
		}
		++j;
	}
	return j;
}

void _cb_paint_line (int * index_list, size_t index_list_size, char * ret_line, size_t ret_single_line_size) {
	for (int i = 0; i < CBANNER_LETTER_HEIGHT; ++i) {
		for (int j = 0; j < index_list_size; ++j) {
			strcat(ret_line + i * CBANNER_LETTER_HEIGHT, CBANNER_LETTERS[index_list[j]][i]);
			if (j + 1 < index_list_size) {
				strcat(ret_line + i * CBANNER_LETTER_HEIGHT, " ");
			}
			else {
				strcat(ret_line + i * CBANNER_LETTER_HEIGHT, "\n");
			}
		}
	}
}

char * cb_generate (const char * line) {
	int line_size = strlen(line);
	int * index_list = malloc(line_size * sizeof(int));
	if (index_list == NULL) {
		return NULL;
	}
	_cb_make_index_list(line, index_list, line_size);
	// size_t index_list_size = _cb_filter_index_list(index_list, line_size);
	size_t index_list_size = line_size;
	// add room for space
	size_t ret_str_line_size = (CBANNER_LETTER_WIDTH + 1) * index_list_size;
	size_t ret_str_size = ret_str_line_size * CBANNER_LETTER_HEIGHT + 1;
	char * ret_str = malloc(ret_str_size);
	if (ret_str == NULL) {
		free(index_list);
		return NULL;
	}
	memset(ret_str, '\0', ret_str_size);
	_cb_paint_line(index_list, index_list_size, ret_str, ret_str_line_size);
	free(index_list);
	return ret_str;
}

