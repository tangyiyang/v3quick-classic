//
//  CCTalkingDataGA.mm
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#import "TDCCTalkingDataGA.h"
#import "TalkingDataGA.h"
    
void TDCCTalkingDataGA::onStart(const char* appId, const char* channelId) {
    if (NULL == appId || strlen(appId) == 0) {
        return;
    }
    NSString* nsAppId = (appId) ? [NSString stringWithUTF8String : appId] : nil;
    NSString* nsChannel = (channelId) ? [NSString stringWithUTF8String : channelId] : nil;
    [TalkingDataGA setSdkType:1];
    [TalkingDataGA onStart:nsAppId withChannelId:nsChannel];
}
    
void TDCCTalkingDataGA::onEvent(const char* eventId, EventParamMap* map) {
    if (NULL == eventId || strlen(eventId) == 0) {
        return;
    }
    
    NSString* pId = [NSString stringWithUTF8String:eventId];
    if (NULL == map) {
        [TalkingDataGA onEvent:pId eventData:NULL];
    } else {
        NSMutableDictionary* dict = [NSMutableDictionary dictionary];
        EventParamMap::iterator it;
        for (it = map->begin(); it != map->end(); it++) {
            std::string key = it->first;
            std::string value = it->second;
            NSString* pKey = [NSString stringWithUTF8String:key.c_str()];
            NSString* pValue = [NSString stringWithUTF8String:value.c_str()];
            [dict setObject:pValue forKey:pKey];
        }
        [TalkingDataGA onEvent:pId eventData:dict];
    }
}

void TDCCTalkingDataGA::setLatitude(double latitude ,double longitude) {
    [TalkingDataGA setLatitude:latitude longitude:longitude];
}
    
const char* TDCCTalkingDataGA::getDeviceId() {
    NSString* deviceId = [TalkingDataGA getDeviceId];
    return [deviceId UTF8String];
}

void TDCCTalkingDataGA::onKill() {
    // for android. ios donothing.
}

void TDCCTalkingDataGA::setVerboseLogDisabled() {
    [TalkingDataGA setVerboseLogDisabled];
}
void TDCCTalkingDataGA::setVerboseLogEnabled(){
}
    

