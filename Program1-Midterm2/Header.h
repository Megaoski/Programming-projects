#pragma once
#ifndef HEADER_H
#define HEADER_H

typedef unsigned char byte;

struct pixel
{
	byte r;
	byte g;
	byte b;

};

int compareTiles(struct pixel tile[8][8], struct pixel tile2[8][8])
{

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; i++)
		{
			if (tile[i][j].r != tile2[i][j].r || tile[i][j].g != tile2[i][j].g || tile[i][j].b != tile2[i][j].b)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}

}



#endif
