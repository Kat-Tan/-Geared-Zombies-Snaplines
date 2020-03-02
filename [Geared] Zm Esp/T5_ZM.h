
#include <SDKDDKVer.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <d3d9.h>
#include <chrono>
#include <cstdint>
#include <stdexcept>
#include <stdio.h>
#include <type_traits>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>

extern bool getStructs();

class Color_t {
public:
	float r, g, b, a;
	Color_t(float _r, float _g, float _b, float _a);
};

#pragma region Invoke
template<typename R>
R Invoke(int Address) { return ((R(*)())(Address))(); }
template<typename R, typename A1>
R Invoke(int Address, A1 a1) { return ((R(*)(A1 a1))(Address))(a1); }
template<typename R, typename A1, typename A2>
R Invoke(int Address, A1 a1, A2 a2) { return ((R(*)(A1 a1, A2 a2))(Address))(a1, a2); }
template<typename R, typename A1, typename A2, typename A3>
R Invoke(int Address, A1 a1, A2 a2, A3 a3) { return ((R(*)(A1 a1, A2 a2, A3 a3))(Address))(a1, a2, a3); }
template<typename R, typename A1, typename A2, typename A3, typename A4>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4))(Address))(a1, a2, a3, a4); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5))(Address))(a1, a2, a3, a4, a5); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6))(Address))(a1, a2, a3, a4, a5, a6); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7))(Address))(a1, a2, a3, a4, a5, a6, a7); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8))(Address))(a1, a2, a3, a4, a5, a6, a7, a8); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18); }
template<typename R, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19>
R Invoke(int Address, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18, A19 a19) { return ((R(*)(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18, A19 a19))(Address))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19); }
#pragma endregion

enum errorParm_t
{
	ERR_FATAL = 0x0,
	ERR_DROP = 0x1,
	ERR_FROM_STARTUP = 0x2,
	ERR_SERVERDISCONNECT = 0x3,
	ERR_DISCONNECT = 0x4,
	ERR_SCRIPT = 0x5,
	ERR_SCRIPT_DROP = 0x6,
	ERR_LOCALIZATION = 0x7,
};

class GfxDrawSurfFields
{
public:
	unsigned __int64 objectId : 16;
	unsigned __int64 customIndex : 9;
	unsigned __int64 reflectionProbeIndex : 5;
	unsigned __int64 dlightMask : 2;
	unsigned __int64 materialSortedIndex : 12;
	unsigned __int64 primaryLightIndex : 8;
	unsigned __int64 surfType : 4;
	unsigned __int64 prepass : 2;
	unsigned __int64 primarySortKey : 6;
};

class GfxDrawSurf
{
public:
	GfxDrawSurfFields fields;
	unsigned __int64 packed;
};

class Material_t {
public:
	const char *name;
	unsigned int gameFlags;
	char pad;
	char sortKey;
	char textureAtlasRowCount;
	char textureAtlasColumnCount;
	GfxDrawSurf drawSurf;
	unsigned int surfaceTypeBits;
	unsigned int layeredSurfaceTypes;
	unsigned __int16 hashIndex;
	int surfaceFlags;
	int contents;
};

class Glyph
{
public:
	unsigned __int16 letter;
	char x0;
	char y0;
	char dx;
	char pixelWidth;
	char pixelHeight;
	float s0;
	float t0;
	float s1;
	float t1;
};

class KerningPairs
{
public:
	unsigned __int16 wFirst;
	unsigned __int16 wSecond;
	int iKernAmount;
};

class Font_t {
public:
	const char *fontName;
	int pixelHeight;
	int isScalingAllowed;
	int glyphCount;
	int kerningPairsCount;
	Material_t *material;
	Material_t *glowMaterial;
	Glyph *glyphs;
	KerningPairs *kerningPairs;
};

class dvar_t {
public:
	const char* name;
	const char* description;
};

typedef float vec_t;

class vec2_t {
public:
	float pitch, yaw;
	vec2_t();
	vec2_t(float x, float y);
	bool operator==(vec2_t& Vec);
	const vec2_t& operator-(vec2_t const& Vec);
	const vec2_t& operator+(vec2_t const& Vec);
	const float Length(void);
};

class vec3_t {
public:
	float pitch, yaw, roll;
	vec3_t();
	vec3_t(float x, float y, float z);
	bool operator==(vec3_t& Vec);
	bool operator!=(vec3_t& Vec);
	const vec3_t& operator-(void);
	const vec3_t& operator-(vec3_t const& Vec);
	const vec3_t& operator+(vec3_t const& Vec);
	const vec3_t& operator*(vec3_t const& Vec);
	const vec3_t& operator/(vec3_t const& Vec);
	const float Length(void);
	inline vec3_t normalize(void);
	float Distance(vec3_t Vec);
	float GetDistance(vec3_t enemi);
	float DotProduct(vec3_t Vec);
};

enum class entityType_t : int8_t
{
	ET_GENERAL,
	ET_PLAYER,
	ET_PLAYER_CORPSE,
	ET_ITEM,
	ET_MISSILE,
	ET_INVISIBLE,
	ET_SCRIPTMOVER,
	ET_SOUND_BLEND,
	ET_FX,
	ET_LOOP_FX,
	ET_PRIMARY_LIGHT,
	ET_MG42,
	ET_PLANE,
	ET_VEHICLE,
	ET_VEHICLE_COLLMAP,
	ET_VEHICLE_CORPSE,
	ET_ACTOR,
	ET_ACTOR_SPAWNER,
	ET_ACTOR_CORPSE,
	ET_STREAMER_HINT,
	ET_EVENTS,
};



enum class DemoType : int16_t
{
	DEMO_TYPE_CLIENT = 1,
	DEMO_TYPE_NONE = 0,
	DEMO_TYPE_SERVER = 2,
	DEMO_TYPE_SERVER_SNAPSHOT = 3
};

enum class CubemapShot : int16_t
{
	CUBEMAPSHOT_BACK = 3,
	CUBEMAPSHOT_COUNT = 7,
	CUBEMAPSHOT_DOWN = 6,
	CUBEMAPSHOT_FRONT = 4,
	CUBEMAPSHOT_LEFT = 2,
	CUBEMAPSHOT_NONE = 0,
	CUBEMAPSHOT_RIGHT = 1,
	CUBEMAPSHOT_UP = 5
};


class cpose_t {
public:
	int16_t lightingHandle; //0x0000
	entityType_t eType; //0x0002
	int8_t eTypeUnion; //0x0003
	char pad_0004[32]; //0x0004
	vec3_t origin; //0x0024
	vec3_t angles; //0x0030
	vec3_t absmin; //0x003C
	vec3_t absmax; //0x0048
};

class LerpEntityState
{
public:
	int32_t clientNum; //0x0000
	int8_t stance; //0x0004
	char pad_0005[1]; //0x0005
	int8_t eFlag; //0x0006
	char pad_0007[17]; //0x0007
	vec3_t origin; //0x0018
	char pad_0024[60]; //0x0024
	int32_t weapon; //0x0060
	char pad_0064[28]; //0x0064
	int32_t alive; //0x0080 0 = Dead
}; //Size: 0x0084

class entityState_s {
public:
	int8_t stance; //0x0000
	char pad_0001[1]; //0x0001
	uint8_t eFlag; //0x0002
	char pad_0003[17]; //0x0003
	vec3_t origin; //0x0014
	char pad_0020[60]; //0x0020
};
class centity_s
{
public:
	cpose_t pose;
	char pad_0054[272]; //0x0054
	LerpEntityState currentEntity; //0x0164
	char pad_01E8[84]; //0x01E8
	entityState_s nextState; //0x023C
	char pad_0298[132]; //0x0298
}; //Size: 0x031C




class cgs_t
{
public:
	int32_t viewX; //0x0000
	int32_t viewY; //0x0004
	int32_t viewWidth; //0x0008
	int32_t viewHeight; //0x000C
	float viewAspect; //0x0010
	int32_t serverCommandSequence; //0x0014
	int32_t processedSnapshotNum; //0x0018
	int32_t localServer; //0x001C
	char gametype[32]; //0x0020
	char szHostName[256]; //0x0040
	int32_t maxClients; //0x0140
	char pad_0144[4]; //0x0144
	char mapname[64]; //0x0148
}; //Size: 0x0188

class playerState_s
{
public:
	int32_t commandTime; //0x0000
	int32_t pm_type; //0x0004
	int32_t bobCycle; //0x0008
	int32_t pm_flag; //0x000C
	int32_t weaponFlags; //0x0010
	int32_t otherFlags; //0x0014
	int32_t pm_time; //0x0018
	uint32_t loopSoundId; //0x001C
	int32_t loopSoundFade; //0x0020
	vec3_t origin; //0x0024
	vec3_t velocity; //0x0030
	int32_t weaponTime; //0x003C
	int32_t weaponDelay; //0x0040
	int32_t weaponTimeLeft; //0x0044
	int32_t weaponDelayLeft; //0x0048
	int32_t weaponIdleTime; //0x004C
	int32_t grenadeTimeLeft; //0x0050
	int32_t throwBackGrenadeOwner; //0x0054
	int32_t throwBackGrenadeTimeLeft; //0x0058
	int32_t weaponRestrictKickTime; //0x005C
	char pad_0060[24]; //0x0060
	int32_t gravity; //0x0078
	float lean; //0x007C
	int32_t speed; //0x0080
	vec3_t delta_angles; //0x0084
	int32_t groundEntityNum; //0x0090
	int32_t groundType; //0x0094
	char pad_0098[172]; //0x0098
	int32_t weapon; //0x0144
	char pad_0148[124]; //0x0148
	int32_t health; //0x01C4
	char pad_01C8[4]; //0x01C8
	int32_t maxHealth; //0x01CC
}; //Size: 0x01D0

class snapshot_s
{
public:
	int32_t snapFlags; //0x0000
	int32_t ping; //0x0004
	int32_t serverTime; //0x0008
	playerState_s ps; //0x000C
	char pad_01DC[116]; //0x01DC
}; //Size: 0x0250

class cg_s
{
public:
	int32_t clientNum; //0x0000
	int32_t localClient; //0x0004
	DemoType demoType; //0x0008
	CubemapShot cubemapShot; //0x000A
	char pad_000C[36]; //0x000C
	snapshot_s *snap; //0x0030
	snapshot_s *nextSnap; //0x0034
	snapshot_s activeSnapshots; //0x0038
	char pad_0288[512]; //0x0288
	int32_t maxEntity; //0x0488
	char pad_048C[594312]; //0x048C
}; //Size: 0x91614

class cursor_t
{
public:
	float x; //0x0000
	float y; //0x0004
}; //Size: 0x0008

class UiContext
{
public:
	int32_t contextIndex; //0x0000
	float bias; //0x0004
	int32_t realTime; //0x0008
	int32_t frameTime; //0x000C
	cursor_t cursor; //0x0010
	cursor_t prevCursor; //0x0018
	int32_t isCursorVisible; //0x0020
	int32_t screenWidth; //0x0024
	int32_t screenHeight; //0x0028
	float screenAspect; //0x002C
	float FPS; //0x0030
	float blurRadiusOut; //0x0034
}; //Size: 0x0038

extern UiContext context;
extern centity_s *centity;
extern cg_s *cg;
extern cgs_t *cgs;

class RenderingHandle_t {
public:
	Material_t* Material_RegisterHandle(const char* name);
	Font_t* R_RegisterFont(const char* font);
};

class Rendering {
public:
	RenderingHandle_t Handle;
	void UI_DrawShader(float x, float y, float w, float h, float angle, Color_t color, const char* shader);
	void DrawLine(vec2_t start, vec2_t end, Color_t color);
	void UI_DrawText(const char* text, float x, float y, float scale, float angle, const char* font, Color_t col);
};

class DvarFunctions {
public:
	bool Dvar_GetBool(const char* dvar);
	void Cbuf_AddText(const char* dvar);
	const char* Dvar_GetString(const char* dvar);
};

class Functions {
public:
	const char *SL_ConvertToString(unsigned int stringValue, int inst);
	int SL_GetString(const char* string);

	int Com_GetClientDObj(int cen, int usr);
	bool CG_DObjGetWorldTagPos(centity_s* cen, int DObj, unsigned int tag, vec3_t& out);
	vec3_t AimTarget_GetTagPos(int client, const char* tag);

	bool WorldToScreen(vec3_t BoneLocation, vec2_t* Stored);
	void UI_OpenToastPopup(const char* icon, const char* title, const char* desc, int seconds);


};

class T5_Engine
{
public:

	Rendering Render;
	DvarFunctions Dvar;
	Functions Function;

	template<typename... Args>
	void Com_Error(errorParm_t code, const char *fmt, Args... a1);
	template<typename... Args>
	const char* va(const char* fmt, Args...a1);

	void T5ZM_Init();
	bool InGame();

};

extern T5_Engine Engine;

