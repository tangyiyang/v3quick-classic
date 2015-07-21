//
//  CCTalkingDataGA.h
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013��� Talkingdata. All rights reserved.
//

#ifndef cocod2dx_talkingdata_CCTalkingDataGA_h
#define cocod2dx_talkingdata_CCTalkingDataGA_h

#include <map>
#include <string>

typedef std::pair< std::string, std::string >   EventParamPair;
typedef std::map< std::string, std::string >    EventParamMap;
    
class TDCCTalkingDataGA {
private:
    TDCCTalkingDataGA() {}
    
public:
    static void onStart(const char* appId, const char* channelId);
    
    static void onEvent(const char* eventId, EventParamMap* map = NULL);

    // from ios
    static void setLatitude(double latitude ,double longitude);

    static const char* getDeviceId();
    
    static void onKill();

    static void setVerboseLogDisabled();

    static void setVerboseLogEnabled();

};

#endif
