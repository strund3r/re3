#pragma once

class CClock
{
	static uint8  &ms_nGameClockHours;
	static uint8  &ms_nGameClockMinutes;
	static uint16 &ms_nGameClockSeconds;
	static uint8  &ms_Stored_nGameClockHours;
	static uint8  &ms_Stored_nGameClockMinutes;
	static uint16 &ms_Stored_nGameClockSeconds;
	static uint32 &ms_nMillisecondsPerGameMinute;
	static int32  &ms_nLastClockTick;
	static bool   &ms_bClockHasBeenStored;
public:

	static void Initialise(uint32 scale);
	static void Update(void);
	static void SetGameClock(uint8 h, uint8 m);
	static int32 GetGameClockMinutesUntil(uint8 h, uint8 m);
	static bool GetIsTimeInRange(uint8 h1, uint8 h2);
	static void StoreClock(void);
	static void RestoreClock(void);

	static int8 GetHours(void) { return ms_nGameClockHours; }
	static int8 GetMinutes(void) { return ms_nGameClockMinutes; }
	static int16 GetSeconds(void) { return ms_nGameClockSeconds; }
};
