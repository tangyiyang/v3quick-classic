//
//  CCTalkingDataGA.mm
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#import "TDCCVirtualCurrency.h"
#import "TalkingDataGA.h"
    
void TDCCVirtualCurrency::onChargeRequest(const char* orderId, const char* iapId, double currencyAmount, const char* currencyType, double virtualCurrencyAmount, const char* paymentType) {
    if (NULL == orderId || strlen(orderId) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:orderId];
    NSString* iap = (iapId) ? [NSString stringWithUTF8String : iapId] : nil;
    NSString* ctype = (currencyType) ? [NSString stringWithUTF8String : currencyType] : nil;
    NSString* ptype = (paymentType) ? [NSString stringWithUTF8String : paymentType] : nil;
    [TDGAVirtualCurrency onChargeRequst:id iapId:iap currencyAmount:currencyAmount currencyType:ctype virtualCurrencyAmount:virtualCurrencyAmount paymentType:ptype];
    
}

void TDCCVirtualCurrency::onChargeSuccess(const char* orderId) {
    if (NULL == orderId || strlen(orderId) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:orderId];
    [TDGAVirtualCurrency onChargeSuccess:id];
}

void TDCCVirtualCurrency::onReward(double currencyAmount, const char* reason) {
    NSString* ocReason = (reason) ? [NSString stringWithUTF8String : reason] : nil;
    [TDGAVirtualCurrency onReward:currencyAmount reason:ocReason];
}
