#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

void    fill(char **area, t_point size, t_point vector, char to_fill)
{
    if (vector.y < 0 || vector.x < 0 || size.x <= vector.x || size.y <= vector.y ||
        area[vector.y][vector.x] != to_fill)
            return ;
    area[vector.y][vector.x] = 'F';
    fill(area, size, (t_point){vector.x + 1, vector.y}, to_fill);
    fill(area, size, (t_point){vector.x - 1, vector.y}, to_fill);
    fill(area, size, (t_point){vector.x, vector.y + 1}, to_fill);
    fill(area, size, (t_point){vector.x, vector.y - 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

char **make_area(char** zone, t_point size)
{
	char **new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char **area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
