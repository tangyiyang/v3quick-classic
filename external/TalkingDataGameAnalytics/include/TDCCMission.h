//
//  CCTDGAMission.h
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#ifndef cocod2dx_talkingdata_CCTDGAMission_h
#define cocod2dx_talkingdata_CCTDGAMission_h

class TDCCMission {
private:
	TDCCMission() {}

public:
	static void onBegin(const char* missionId);

	static void onCompleted(const char* missionId);

	static void onFailed(const char* missionId, const char* failedCause);

};

#endif
