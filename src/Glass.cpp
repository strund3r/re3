#include "common.h"
#include "patcher.h"
#include "Glass.h"

WRAPPER void
CGlass::WindowRespondsToCollision(CEntity *ent, float amount, CVector speed, CVector point, bool foo)
{
	EAXJMP(0x503F10);
}

WRAPPER void
CGlass::WindowRespondsToSoftCollision(CEntity *ent, float amount)
{
	EAXJMP(0x504630);
}
