//
//  CCTalkingDataGA.mm
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#import "TDCCMission.h"
#import "TalkingDataGA.h"
    
void TDCCMission::onBegin(const char* missionId) {
    if (NULL == missionId || strlen(missionId) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:missionId];
    [TDGAMission onBegin:id];
}

void TDCCMission::onCompleted(const char* missionId) {
    if (NULL == missionId || strlen(missionId) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:missionId];
    [TDGAMission onCompleted:id];
}

void TDCCMission::onFailed(const char* missionId, const char* failedCause) {
    if (NULL == missionId || strlen(missionId) == 0) {
        return;
    }
    NSString* id = [NSString stringWithUTF8String:missionId];
    NSString* cause = (failedCause) ? [NSString stringWithUTF8String : failedCause] : nil;
    [TDGAMission onFailed:id failedCause:cause];
}