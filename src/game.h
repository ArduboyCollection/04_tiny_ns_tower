#ifndef GAME_H
#define GAME_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lib/common.h"

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

enum {
	GAME_EXEC_RESET,
	GAME_EXEC_PLAY,
	GAME_EXEC_OVER,
};

typedef struct {
	u8 act;

} ST_GAME;



//---------------------------------------------------------------------------
void GameInit(void);
void GameLoop(void);

void GameExecReset(void);
void GameExecPlay(void);
void GameExecOver(void);

void GameSetAct(u8 act);


#ifdef __cplusplus
}
#endif
#endif
