//
//  CCTalkingDataGA.mm
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#import "TDCCItem.h"
#import "TalkingDataGA.h"
    
void TDCCItem::onPurchase(const char* item, int number, double price) {
    if (NULL == item || strlen(item) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:item];
    [TDGAItem onPurchase:id itemNumber:number priceInVirtualCurrency:price];
}

void TDCCItem::onUse(const char* item, int number) {
    if (NULL == item || strlen(item) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:item];
    [TDGAItem onUse:id itemNumber:number];
}