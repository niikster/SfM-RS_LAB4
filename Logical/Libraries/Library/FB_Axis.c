
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Axis(struct FB_Axis* inst)
{

	inst->speed = inst->counter - inst->last_counter;
	inst->speed = (inst->speed * 3000 / 24.0) / 0.002; //(inst->speed * 3000 / 24.0) / 0.002
	inst->last_counter = inst->counter;
}
