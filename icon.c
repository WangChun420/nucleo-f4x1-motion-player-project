/*
 * icon.c
 *
 *  Created on: 2014/06/21
 *      Author: masayuki
 */


#include "icon.h"
#include "sound.h"
#include "lcd.h"

void Update_Navigation_Loop_Icon(drawBuff_typedef *db, uint8_t index)
{
	LCDPutBuffToBgImg(db->navigation_loop.x, db->navigation_loop.y, \
			db->navigation_loop.width, db->navigation_loop.height, db->navigation_loop.p);

	switch(index){
	case NAV_ONE_PLAY_EXIT: // 1 play exit
		LCDPutIcon(db->navigation_loop.x, db->navigation_loop.y, db->navigation_loop.width, db->navigation_loop.height, \
				navigation_bar_18x14, navigation_bar_18x14_alpha);
		break;
	case NAV_PLAY_ENTIRE: // play entire in directry
		LCDPutIcon(db->navigation_loop.x, db->navigation_loop.y, db->navigation_loop.width, db->navigation_loop.height, \
				navigation_loop_18x14, navigation_loop_18x14_alpha);
		break;
	case NAV_INFINITE_PLAY_ENTIRE: // infinite play entire in directry
		LCDPutIcon(db->navigation_loop.x, db->navigation_loop.y, db->navigation_loop.width, db->navigation_loop.height, \
				navigation_infinite_entire_loop_18x14, navigation_infinite_entire_loop_18x14_alpha);
		break;
	case NAV_INFINITE_ONE_PLAY: // infinite 1 play
		LCDPutIcon(db->navigation_loop.x, db->navigation_loop.y, db->navigation_loop.width, db->navigation_loop.height, \
				navigation_infinite_one_loop_18x14, navigation_infinite_one_loop_18x14_alpha);
		break;
	case NAV_SHUFFLE_PLAY: // shuffle
		LCDPutIcon(db->navigation_loop.x, db->navigation_loop.y, db->navigation_loop.width, db->navigation_loop.height, \
				navigation_shuffle_18x14, navigation_shuffle_18x14_alpha);
		break;
	default:
		break;
	}

}

const uint16_t progress_circular_bar_16x16x12[] =
{
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x4a8a,
		0x4a8a,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2965,0x6b8e,0x0821,0x0000,0x7bcf,
		0x7bcf,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x8c71,0x632c,0x0000,0x7bef,
		0x73cf,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0841,0x2965,0x0000,0x0000,0x31a7,0x8c71,0x0861,0x4a8a,
		0x528a,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0021,0x630c,0x7bf0,0x3186,0x0000,0x4208,0x2104,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x0821,0x52ab,0x7bef,0x4208,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x1062,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x3a08,0x5acb,0x5acb,0x39e8,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x3a08,0x5acb,0x5acb,0x39e8,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x0000,0x0000,0x0000,0x0841,0x18a3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x4a69,0x5b0c,0x31a7,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0821,0x4a8a,0x632c,0x2125,0x0000,0x2945,0x18e3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0841,0x2945,0x0000,0x0000,0x2104,0x52ab,0x1062,0x2945,
		0x2965,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x52ab,0x4208,0x0000,0x39c7,
		0x39c7,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x4a49,0x0021,0x0000,0x39c7,
		0x39c7,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0821,0x0000,0x0000,0x2965,
		0x2965,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0021,0x0000,0x0000,0x4a69,
		0x4a69,0x0000,0x0000,0x0821,0x0821,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x630c,0x0821,0x0000,0x738e,
		0x738e,0x0000,0x0821,0x73cf,0x3186,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x7bf0,0x5acb,0x0000,0x738e,
		0x738e,0x0000,0x6b6d,0x94d3,0x0000,0x0000,0x0000,0x0000,
		0x0841,0x2945,0x0000,0x0000,0x3186,0x7bef,0x0861,0x4a49,
		0x4a49,0x0861,0x94d3,0x39c7,0x0000,0x0000,0x10a2,0x0000,
		0x0821,0x5acb,0x6b6e,0x2965,0x0000,0x4208,0x2104,0x0000,
		0x0000,0x2104,0x4a49,0x0000,0x18a3,0x39e7,0x31a6,0x0020,
		0x0000,0x0821,0x528a,0x6b6e,0x39c7,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x39e7,0x3186,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x0861,0x18a3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x31c7,0x4a69,0x4a69,0x31a7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x31c7,0x4a69,0x4a69,0x31a7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x0000,0x0000,0x0000,0x0861,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x4208,0x52ab,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0821,0x4a49,0x52ab,0x2124,0x0000,0x2104,0x18c3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x18c3,0x0000,0x0000,0x20e4,0x4a49,0x1062,0x2104,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4a49,0x39e7,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x3a08,0x0821,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0821,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x4229,
		0x4229,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x5acb,0x0821,0x0000,0x632c,
		0x632c,0x0000,0x0821,0x6b8e,0x2965,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x6b6e,0x528a,0x0000,0x632c,
		0x632c,0x0000,0x632c,0x8c71,0x0000,0x0000,0x0000,0x0000,
		0x0841,0x2945,0x0000,0x0000,0x2965,0x6b6e,0x1062,0x4228,
		0x4228,0x0862,0x8c71,0x31a7,0x0000,0x0000,0x3186,0x0821,
		0x0821,0x4a8a,0x632c,0x2124,0x0000,0x39c7,0x18c3,0x0000,
		0x0000,0x2104,0x4228,0x0000,0x39c7,0x94d3,0x73cf,0x0821,
		0x0000,0x0821,0x4a69,0x5b0c,0x31a6,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4a49,0x94b3,0x6b6d,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x0862,0x18a3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x1082,0x0000,0x0000,0x0000,
		0x3186,0x4228,0x4228,0x3186,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2104,0x2966,0x2966,0x2124,
		0x3186,0x4228,0x4228,0x3186,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x0000,0x0000,0x0000,0x0862,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x39e7,0x4a49,0x2104,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0821,0x3a08,0x4a49,0x20e4,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x18c3,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x3a08,
		0x3a08,0x0000,0x0000,0x0021,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x4a8a,0x0821,0x0000,0x5acb,
		0x5acb,0x0000,0x0821,0x630c,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x632c,0x4a69,0x0000,0x5acb,
		0x5acb,0x0000,0x5acb,0x7bf0,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x18c3,0x0000,0x0000,0x2125,0x5b0c,0x0841,0x39e8,
		0x39e8,0x1062,0x7bef,0x3186,0x0000,0x0000,0x2965,0x0841,
		0x0821,0x4a49,0x52ab,0x2104,0x0000,0x31a7,0x18c3,0x0000,
		0x0000,0x2104,0x4208,0x0000,0x31a7,0x8c71,0x6b8e,0x0821,
		0x0000,0x0021,0x4208,0x52ab,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4208,0x8c71,0x632c,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x1062,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x0861,0x0000,0x0000,0x0000,
		0x2965,0x39c7,0x39c7,0x2945,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4a8a,0x7bef,0x7bcf,0x4a8a,
		0x2965,0x39c7,0x39c7,0x2965,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x52aa,0x73cf,0x7bcf,0x4a8a,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0821,0x0000,0x0000,0x31c7,
		0x31c7,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x4a49,0x0021,0x0000,0x4a69,
		0x4a69,0x0000,0x0821,0x5acb,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x52ab,0x4208,0x0000,0x4a69,
		0x4a69,0x0000,0x528a,0x6b6e,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x18c3,0x0000,0x0000,0x2124,0x52ab,0x0861,0x31a7,
		0x31a7,0x1082,0x6b6e,0x2965,0x0000,0x0000,0x2965,0x0841,
		0x0821,0x3a08,0x4a49,0x20e4,0x0000,0x2945,0x18e3,0x0000,
		0x0000,0x18c3,0x39c7,0x0000,0x3186,0x7bf0,0x630c,0x0021,
		0x0000,0x0821,0x39e7,0x4a49,0x2104,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4208,0x7bef,0x52ab,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x1062,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x0861,0x0000,0x0000,0x0000,
		0x2124,0x2966,0x2966,0x2104,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4a49,0x738e,0x738e,0x4a69,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4a49,0x738e,0x738e,0x4a69,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x0861,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4a49,0x94d3,0x6b6d,0x0821,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18a3,0x18e3,0x0000,0x39c7,0x94d3,0x73cf,0x0821,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18a3,0x0000,0x0000,0x3186,0x0821,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0821,0x0000,0x0000,0x3186,
		0x3186,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x3a08,0x0821,0x0000,0x4228,
		0x4228,0x0000,0x0821,0x4a8a,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4a49,0x39e7,0x0000,0x4228,
		0x4228,0x0000,0x4a69,0x632c,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x10a2,0x0000,0x0000,0x20e4,0x4a49,0x0862,0x3186,
		0x3186,0x0862,0x5b0c,0x2124,0x0000,0x0000,0x2945,0x0841,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x2104,0x18c3,0x0000,
		0x0000,0x18c3,0x31a7,0x0000,0x2965,0x6b6e,0x5acb,0x0821,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x39c7,0x6b6e,0x528a,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18a3,0x0841,0x0000,0x0000,0x0000,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4228,0x632c,0x632c,0x4229,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x4228,0x632c,0x632c,0x4229,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x0862,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4208,0x8c71,0x632c,0x0821,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x2104,0x4a49,0x0000,0x31a7,0x8c71,0x6b8e,0x0821,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2104,0x1082,0x94b3,0x39c7,0x0000,0x0000,0x2965,0x0841,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x6b6d,0x94d3,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0821,0x73cf,0x3186,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0821,0x0821,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2965,
		0x2965,0x0000,0x0000,0x0821,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x39c7,
		0x39c7,0x0000,0x0021,0x4a49,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x39c7,
		0x39c7,0x0000,0x4208,0x52ab,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2965,
		0x2945,0x1062,0x52ab,0x2104,0x0000,0x0000,0x2945,0x0841,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18e3,0x2945,0x0000,0x2125,0x632c,0x4a8a,0x0821,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x31a7,0x5b0c,0x4a69,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18a3,0x0841,0x0000,0x0000,0x0000,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e8,0x5acb,0x5acb,0x3a08,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e8,0x5acb,0x5acb,0x3a08,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x1062,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x4208,0x7bef,0x5acb,0x0821,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x2104,0x4208,0x0000,0x3186,0x7bf0,0x630c,0x0021,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x528a,
		0x4a8a,0x0861,0x8c71,0x31a7,0x0000,0x0000,0x2945,0x0841,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x73cf,
		0x7bef,0x0000,0x632c,0x8c71,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x7bcf,
		0x7bcf,0x0000,0x0821,0x6b8e,0x2965,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x4a8a,
		0x4a8a,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0821,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0821,0x3a08,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x39e7,0x4a49,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2104,0x1062,0x4a49,0x20e4,0x0000,0x0000,0x18c3,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18c3,0x2104,0x0000,0x2124,0x52ab,0x4a49,0x0821,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x52ab,0x4208,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x0861,0x0000,0x0000,0x0000,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x31a7,0x4a69,0x4a69,0x31c7,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x31a7,0x4a69,0x4a69,0x31c7,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x1082,0x0000,0x0000,0x0000,
		0x0000,0x0021,0x3186,0x39e7,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x39c7,0x6b6e,0x528a,0x0821,0x0000,
		0x0020,0x31a6,0x39e7,0x18a3,0x0000,0x4a49,0x2104,0x0000,
		0x0000,0x2104,0x4208,0x0000,0x2965,0x6b6e,0x5acb,0x0821,
		0x0000,0x10a2,0x0000,0x0000,0x39c7,0x94d3,0x0861,0x4a49,
		0x4a49,0x0862,0x7bef,0x3186,0x0000,0x0000,0x2945,0x0841,
		0x0000,0x0000,0x0000,0x0000,0x94d3,0x6b6d,0x0000,0x738e,
		0x738e,0x0000,0x52ab,0x7bf0,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x3186,0x73cf,0x0821,0x0000,0x738e,
		0x738e,0x0000,0x0821,0x630c,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0821,0x0821,0x0000,0x0000,0x4a69,
		0x4a69,0x0000,0x0000,0x0021,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x18c3,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x20e4,0x4a49,0x3a08,0x0821,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2104,0x4a49,0x39e7,0x0821,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x0862,0x0000,0x0000,0x0000,
		0x2124,0x2966,0x2966,0x2125,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x3186,0x4228,0x4228,0x3186,
		0x2124,0x2966,0x2966,0x2104,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x3186,0x4228,0x4228,0x3186,
		0x0000,0x0000,0x0000,0x1082,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18a3,0x0862,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x6b6d,0x94b3,0x4a49,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x31a6,0x5b0c,0x4a69,0x0821,0x0000,
		0x0821,0x73cf,0x94d3,0x39c7,0x0000,0x4228,0x2104,0x0000,
		0x0000,0x18c3,0x39c7,0x0000,0x2124,0x632c,0x4a8a,0x0821,
		0x0821,0x3186,0x0000,0x0000,0x31a7,0x8c71,0x0862,0x4228,
		0x4228,0x0841,0x6b6e,0x2965,0x0000,0x0000,0x2945,0x0841,
		0x0000,0x0000,0x0000,0x0000,0x8c71,0x632c,0x0000,0x632c,
		0x632c,0x0000,0x528a,0x6b6e,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2965,0x6b8e,0x0821,0x0000,0x632c,
		0x632c,0x0000,0x0821,0x5acb,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x4229,
		0x4229,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x10a2,0x0000,0x0000,0x18c3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0020,0x31a6,0x39e7,0x18c3,0x0000,0x18e4,0x18a3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x0021,0x3186,0x39e7,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x4a8a,0x7bcf,0x73cf,0x52aa,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2965,0x39c7,0x39c7,0x2965,
		0x4a8a,0x7bcf,0x7bef,0x4a8a,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2945,0x39c7,0x39c7,0x2965,
		0x0000,0x0000,0x0000,0x0861,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x1062,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x632c,0x8c71,0x4208,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x52ab,0x4208,0x0021,0x0000,
		0x0821,0x6b8e,0x8c71,0x31a7,0x0000,0x4208,0x2104,0x0000,
		0x0000,0x18c3,0x31a7,0x0000,0x2104,0x52ab,0x4a49,0x0821,
		0x0841,0x2965,0x0000,0x0000,0x3186,0x7bef,0x1062,0x39e8,
		0x39e8,0x0841,0x5b0c,0x2125,0x0000,0x0000,0x18c3,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x7bf0,0x52ab,0x0000,0x5acb,
		0x5acb,0x0000,0x4a69,0x632c,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x630c,0x0821,0x0000,0x5acb,
		0x5acb,0x0000,0x0821,0x4a8a,0x2945,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0021,0x0000,0x0000,0x3a08,
		0x3a08,0x0000,0x0000,0x0821,0x0841,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x10a2,0x31a6,0x0021,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x39e7,0x3186,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0821,0x3186,0x0000,0x0000,0x18a3,0x39e7,0x0000,0x2124,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0821,0x73cf,0x94d3,0x39c7,0x0000,0x18e3,0x18a3,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x0821,0x6b6d,0x94d3,0x4a49,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x0861,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x4a69,0x738e,0x738e,0x4a49,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x4a69,0x738e,0x738e,0x4a49,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2104,0x2966,0x2966,0x2124,
		0x0000,0x0000,0x0000,0x0861,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18c3,0x1062,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x5acb,0x7bef,0x4208,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2104,0x4a49,0x39e7,0x0821,0x0000,
		0x0021,0x630c,0x7bf0,0x3186,0x0000,0x39c7,0x18c3,0x0000,
		0x0000,0x18e3,0x2945,0x0000,0x20e4,0x4a49,0x3a08,0x0821,
		0x0841,0x2945,0x0000,0x0000,0x2965,0x6b6e,0x0861,0x31a7,
		0x31a7,0x0861,0x52ab,0x2124,0x0000,0x0000,0x18c3,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x6b6e,0x528a,0x0000,0x4a69,
		0x4a69,0x0000,0x4208,0x52ab,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x5acb,0x0821,0x0000,0x4a69,
		0x4a69,0x0000,0x0021,0x4a49,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x31c7,
		0x31c7,0x0000,0x0000,0x0821,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0821,0x0821,0x0000,0x0000,0x2124,
		0x2124,0x0000,0x0000,0x0020,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x3186,0x73cf,0x0821,0x0000,0x2966,
		0x2966,0x0000,0x0021,0x31a6,0x10a2,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x94d3,0x6b6d,0x0000,0x2966,
		0x2966,0x0000,0x3186,0x39e7,0x0000,0x0000,0x0000,0x0000,
		0x0841,0x2965,0x0000,0x0000,0x39c7,0x94b3,0x1082,0x2104,
		0x2124,0x0000,0x39e7,0x18c3,0x0000,0x0000,0x10a2,0x0000,
		0x0821,0x6b8e,0x8c71,0x31a7,0x0000,0x4a49,0x2104,0x0000,
		0x0000,0x18a3,0x18e4,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0000,0x0821,0x632c,0x8c71,0x4208,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0000,0x0000,0x0000,0x0862,0x18e3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x4229,0x632c,0x632c,0x4228,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x4229,0x632c,0x632c,0x4228,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x2125,0x2966,0x2966,0x2124,
		0x0000,0x0000,0x0000,0x1062,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0821,0x528a,0x6b6e,0x39c7,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x18e3,0x39e7,0x3186,0x0021,0x0000,
		0x0821,0x5acb,0x6b6e,0x2965,0x0000,0x31a7,0x18c3,0x0000,
		0x0000,0x18c3,0x2104,0x0000,0x18c3,0x39e7,0x31a6,0x0020,
		0x0841,0x2945,0x0000,0x0000,0x2124,0x5b0c,0x0862,0x3186,
		0x3186,0x0862,0x4a49,0x20e4,0x0000,0x0000,0x10a2,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x632c,0x4a69,0x0000,0x4228,
		0x4228,0x0000,0x39e7,0x4a49,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x2945,0x4a8a,0x0821,0x0000,0x4228,
		0x4228,0x0000,0x0821,0x3a08,0x18c3,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0841,0x0821,0x0000,0x0000,0x3186,
		0x3186,0x0000,0x0000,0x0821,0x0000,0x0000,0x0000,0x0000,
};