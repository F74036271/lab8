#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 2
#define MINO_J 0
#define MINO_Z 1

Mino* genMino()
{
	int mino_type;
	Mino *ptr;
	mino_type=random()%NUM_MINO;

	switch(mino_type){
		case MINO_J:
			ptr=new MinoJ[50000000];
			break;
		case MINO_Z:
			ptr=new MinoZ[50000000];
			break;
	}
	return ptr;
}
