#pragma once
#include "T5_ZM.h"

unsigned short(__cdecl* SL_FindString)(const char* str, int localClientNum) = (unsigned short(__cdecl*)(const char*, int))0x42F420;

//AimTarget_IsTargetVisible is a usercall which means we cant call it directly so i have taken the liberty of writing it in asm to bypass that issue
bool AimTarget_IsTargetVisible(int localClientNum, centity_s* targetEnt, const char* visBone)
{
	DWORD addr = 0x758230;
	unsigned short bone = SL_FindString(visBone, 0);

	__asm
	{
		mov     ecx, targetEnt
		movzx eax, bone
		push localClientNum
		call        addr
		add     esp, 4
	}
}
void SnapLines() {
	getStructs(); //fills our structs or we'll crash
	for (int i = 0; i < 1023; i++) {
		vec2_t Pos, Spine;
			if (centity[i].pose.eType == entityType_t::ET_ACTOR && centity[i].currentEntity.alive > 0) {  //Checks if the target is a zombie and is alive
				vec3_t SpineUpper = Engine.Function.AimTarget_GetTagPos(i, "j_helmet"); //Creates our vector3 that checks for the model tag that we entered aka the helmet(top of the head)
				if (Engine.Function.WorldToScreen(centity[i].pose.origin, &Pos)) {
					if (Engine.Function.WorldToScreen(SpineUpper, &Spine)) {
						//	Engine.Render.DrawLine(vec2_t(context.screenWidth / 2, context.screenHeight), Spine, convertToFloat(Color_t(1,0,0,1), testing));					
						Engine.Render.DrawLine(vec2_t(context.screenWidth / 2, context.screenHeight), Spine, AimTarget_IsTargetVisible(0, &centity[i], "j_helmet") ? Color_t(0, 1, 0, 1) : (Color_t(1, 0, 0, 1)));
						/* Draws the line to the zombies using the tag we provided it earlier, draw line takes 3 paramaters first 2 being our x and y we want it to draw at ive set it so it is
		half of the screens width which means the middle and the bottom of our screen for the y.
		AimTarget_IsTargetVisible will check if that tag is visible to us and then change the colour from green to red as you can see in the colour class above;

		 */
					}

				}
			}
		
	}
}

