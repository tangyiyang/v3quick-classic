//
//  TDGAItem.h
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#ifndef cocod2dx_talkingdata_TDGAItem_h
#define cocod2dx_talkingdata_TDGAItem_h
    
class TDCCItem {
private:
	TDCCItem() {}

public:
	static void onPurchase(const char* item, int number, double price);

	static void onUse(const char* item, int number);

};
    
#endif
