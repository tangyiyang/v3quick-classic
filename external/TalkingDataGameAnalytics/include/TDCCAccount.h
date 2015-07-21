//
//  CCTDGAAccount.h
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#ifndef cocod2dx_talkingdata_CCTDGAAccount_h
#define cocod2dx_talkingdata_CCTDGAAccount_h

class TDCCAccount {
private:
	friend class TDCCTalkingDataGA;

	void* mAccount;
    
    TDCCAccount();

	~TDCCAccount();

public:
	enum TDCCAccountType {
		kAccountAnonymous = 0,
		kAccountRegistered = 1,
		kAccountSianWeibo = 2,
		kAccountQQ = 3,
		kAccountTencentWeibo = 4,
		kAccountND91 = 5,
		kAccountType1 = 11,
		kAccountType2 = 12,
		kAccountType3 = 13,
		kAccountType4 = 14,
		kAccountType5 = 15,
		kAccountType6 = 16,
		kAccountType7 = 17,
		kAccountType8 = 18,
		kAccountType9 = 19,
		kAccountType10 = 20
	};

	enum TDCCGender {
		kGenderUnknown = 0,
		kGenderMale = 1,
		kGenderFemale = 2
	};
    
    
    
    static TDCCAccount* setAccount(const char* accountId);

	void setAccountName(const char* accountName);

	void setAccountType(TDCCAccountType accountType);

	void setLevel(int level);

	void setGender(TDCCGender gender);

	void setAge(int age);

	void setGameServer(const char* gameServer);

};

#endif
