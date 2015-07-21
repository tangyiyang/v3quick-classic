#include "TDCCAccount.h"
#include "TDGAJniHelper.h"
#include "TDGALog.h"

extern jclass gClass_Account;
extern jclass gClass_AccountType;
extern jclass gClass_Gender;

static const char * TDCCAccountTypeString[] = {
			"ANONYMOUS",
			"REGISTERED",
			"SINA_WEIBO",
			"QQ",
			"QQ_WEIBO",
			"ND91",
			"", "", "", "", "",
			"TYPE1",
			"TYPE2",
			"TYPE3",
			"TYPE4",
			"TYPE5",
			"TYPE6",
			"TYPE7",
			"TYPE8",
			"TYPE9",
			"TYPE10"
};

static const char * TDCCGenderString[] = {
			"UNKNOW",
			"MALE",
			"FEMALE"
};

TDCCAccount::TDCCAccount():mAccount(NULL) {
	LOGD("TDCCAccount()");
}

TDCCAccount::~TDCCAccount() {
	LOGD("~TDCCAccount()");
	JNIEnv *env = 0;
	if (mAccount && TDGAJniHelper::getJNIEnv(&env)) {
		env->DeleteGlobalRef((jobject)mAccount);
		mAccount == NULL;
	}
}

TDCCAccount* TDCCAccount::setAccount(const char* accountId) {
    if (NULL == accountId || strlen(accountId) == 0) {
        return NULL;
    }
    static TDCCAccount account;
    TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Account
		, "setAccount"
		, "(Ljava/lang/String;)Lcom/tendcloud/tenddata/TDGAAccount;")) {
		if (account.mAccount) {
			t.env->DeleteGlobalRef((jobject)account.mAccount);
			account.mAccount == NULL;
		}

		jstring jaccountId = t.env->NewStringUTF(accountId);
		jobject jobj = t.env->CallStaticObjectMethod(gClass_Account, t.methodID, jaccountId);
		account.mAccount = (void*)t.env->NewGlobalRef(jobj);
		t.env->DeleteLocalRef(jaccountId);
		t.env->DeleteLocalRef(jobj);
	}

    return &account;
}

void TDCCAccount::setAccountName(const char* accountName) {
	TDGAJniMethodInfo t;
	if (mAccount && TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setAccountName"
		, "(Ljava/lang/String;)V")) {
		jstring jaccountName = t.env->NewStringUTF(accountName);
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, jaccountName);
		t.env->DeleteLocalRef(jaccountName);
	}
}

void TDCCAccount::setGameServer(const char* gameServer) {
	TDGAJniMethodInfo t;
	if (mAccount && TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setGameServer"
		, "(Ljava/lang/String;)V")) {
		jstring jgameServer = t.env->NewStringUTF(gameServer);
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, jgameServer);
		t.env->DeleteLocalRef(jgameServer);
	}
}

void TDCCAccount::setLevel(int level) {
	TDGAJniMethodInfo t;
	if (mAccount && TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setLevel"
		, "(I)V")) {
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, level);
	}
}

void TDCCAccount::setAge(int age) {
	TDGAJniMethodInfo t;
	if (mAccount && TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setAge"
		, "(I)V")) {
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, age);
	}
}

void TDCCAccount::setAccountType(TDCCAccountType accountType) {
	TDGAJniMethodInfo t;
	TDGAJniMethodInfo type;
	if (mAccount && TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setAccountType"
		, "(Lcom/tendcloud/tenddata/TDGAAccount$AccountType;)V") &&
		TDGAJniHelper::getStaticMethodInfo(type
		, gClass_AccountType
		, "valueOf"
		, "(Ljava/lang/String;)Lcom/tendcloud/tenddata/TDGAAccount$AccountType;")) {
		jstring jaccountType = t.env->NewStringUTF(TDCCAccountTypeString[accountType]);
		jobject jtype = type.env->CallStaticObjectMethod(gClass_AccountType, type.methodID, jaccountType);
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, jtype);
		t.env->DeleteLocalRef(jtype);
		t.env->DeleteLocalRef(jaccountType);
	}
}

void TDCCAccount::setGender(TDCCGender gender) {
	TDGAJniMethodInfo t;
	TDGAJniMethodInfo type;
	if (mAccount
		&& TDGAJniHelper::getMethodInfo(t
		, gClass_Account
		, "setGender"
		, "(Lcom/tendcloud/tenddata/TDGAAccount$Gender;)V")
		&& TDGAJniHelper::getStaticMethodInfo(type
		, gClass_Gender
		, "valueOf"
		, "(Ljava/lang/String;)Lcom/tendcloud/tenddata/TDGAAccount$Gender;")) {

		jstring jgender = type.env->NewStringUTF(TDCCGenderString[gender]);
		jobject jtype = type.env->CallStaticObjectMethod(gClass_Gender, type.methodID, jgender);
		type.env->DeleteLocalRef(jgender);
		t.env->CallVoidMethod((jobject)mAccount, t.methodID, jtype);
		t.env->DeleteLocalRef(jtype);
	}
}
