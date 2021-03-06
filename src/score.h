#ifndef SCORE_H
#define SCORE_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lib/common.h"

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

typedef struct {
	u16  best;
	u16  rec;
	u16  jump;

} ST_SCORE;


//---------------------------------------------------------------------------
void ScoreInit(void);
void ScoreInitRnd(void);
void ScoreDraw(void);

void ScoreSaveBest(void);
void ScoreLoadBest(void);

void ScoreAddRec(void);
void ScoreAddJump(void);
bool ScoreIsEndRec(void);

void ScoreDebug(void);


#ifdef __cplusplus
}
#endif
#endif
