//
//  CCTDGAVirtualCurrency.h
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#ifndef cocod2dx_talkingdata_CCTDGAVirtualCurrency_h
#define cocod2dx_talkingdata_CCTDGAVirtualCurrency_h

class TDCCVirtualCurrency {
private:
	TDCCVirtualCurrency() {}

public:
	static void onChargeRequest(const char* orderId, const char* iapId, double currencyAmount, const char* currencyType, double virtualCurrencyAmount, const char* paymentType);

	static void onChargeSuccess(const char* orderId);
    
    static void onReward(double currencyAmount, const char* reason);

};

#endif
